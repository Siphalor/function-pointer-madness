fn main() {
    let run: fn() -> () = || println!("Hello World");
    let consume: fn(&str) -> () = consume;
    let lowercase_all: fn(Vec<&str>) -> Vec<String> = |strings: Vec<&str>| {
        strings
            .into_iter()
            .map(|s| s.to_ascii_lowercase())
            .collect()
    };
    let for_each: fn(Vec<String>, fn(&str)) -> () = for_each;

    run();
    consume("Rust");
    for_each(lowercase_all(vec!["ABC", "DEF"]), consume);
}

fn consume(text: &str) {
    println!("Hello {}!", text)
}

fn for_each<F: Fn(&str)>(strings: Vec<String>, fun: F) {
    for string in strings.iter() {
        fun(string)
    }
}
