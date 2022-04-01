fn main() {
    let run: fn() -> () = || println!("Hello World");
    let consume: fn(&String) -> () = consume;
    let lowercase_all: fn(Vec<&str>) -> Vec<String> = |strings: Vec<&str>| {
        strings
            .into_iter()
            .map(|s| s.to_ascii_lowercase())
            .collect()
    };
    let for_each: fn(Vec<String>, fn(&String)) -> () = for_each;

    run();
    consume(&"Rust".to_owned());
    for_each(lowercase_all(vec!["ABC", "DEF"]), consume);
}

fn consume(text: &String) {
    println!("Hello {}!", text)
}

fn for_each<T, F: Fn(&T)>(strings: Vec<T>, fun: F) {
    for string in strings.iter() {
        fun(string)
    }
}
