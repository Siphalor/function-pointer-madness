fn main() {
    let run: fn() -> () = || println!("Hello World");
    let consume: fn(&String) -> () = |text| println!("Hello {}!", text);
    let lowercase_all: fn(Vec<&str>) -> Vec<String> = lowercase_all_fn;
    let for_each: fn(Vec<String>, fn(&String)) -> () = for_each_fn;

    run();
    consume(&"Rust".to_owned());
    for_each(lowercase_all(vec!["ABC", "DEF"]), consume);
}

fn lowercase_all_fn(strings: Vec<&str>) -> Vec<String> {
    strings.into_iter()
        .map(str::to_ascii_lowercase)
        .collect()
}

fn for_each_fn<T, F: Fn(&T)>(strings: Vec<T>, fun: F) {
    for string in strings.iter() {
        fun(string)
    }
}
