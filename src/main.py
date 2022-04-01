from typing import Callable, List

def main():
    run: Callable[[], None] = lambda: print("Hello World!")
    consume: Callable[[str], None] = lambda text: print(f"Hello {text}!")
    lowercase_all: Callable[[List[str]], str] = lambda strings: map(str.lower, strings)
    for_each: Callable[[List[str], Callable[[str], None]], None] = for_each_fn

    run()
    consume("Python")
    for_each(lowercase_all(["ABC", "DEF"]), consume);

def for_each_fn(strings: List[str], fun: Callable[[str], None]) -> None:
    for string in strings:
        fun(string)

main()
