#include <algorithm>
#include <cctype>
#include <format>
#include <iostream>
#include <string>
#include <type_traits>
#include <vector>

void run_fn();
void consume_fn(std::string &);
std::vector<std::string> lowercase_all_fn(std::vector<std::string>);
template <typename T>
void for_each_fn(std::vector<T>, void (*)(T &));

int main(int, char **) {
    void (*run)() = run_fn;
    void (*consume)(std::string &) = consume_fn;
    std::vector<std::string> (*lowercase_all)(std::vector<std::string>) = lowercase_all_fn; 
    void (*for_each)(std::vector<T>, void (*)(T &)) = for_each_fn;

    run();
    std::string str("C++");
    consume(&str);
    std::vector<std::string> strings{"ABC", "DEF"}
    for_each<std::string>(lowercase_all(strings), consume);
}

void run_fn() { std::cout << "Hello World" << std::endl; }

void consume_fn(std::string &text) {
    std::cout << std::format("Hello {}!", text) << std::endl;
}

std::vector<std::string> lowercase_all_fn(std::vector<std::string> strings) {
    std::vector<std::string> result(strings);
    for_each<std::string>(result, [](std::string &mixed) -> void {
        std::string original = mixed;
        std::string replace(original.size(), '\0');
        std::transform(original.begin(), original.end(), replace.begin(),
                    std::tolower);
        std::string &lowered = replace;
        std::swap(mixed, lowered); 
    });
    return result;
}

template <typename T>
void for_each_fn(std::vector<T> vec, void (*action)(T &)) {
    for (size_t i = 0; i < vec.size(); i += 1) {
        action(&vec[i]);
    }
}
