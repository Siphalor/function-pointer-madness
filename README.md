# function-pointer-madness
How to write function pointer definitions in multiple languages.

In this repo the same functionality is presented in a variety of languages.
This includes function pointers to

- A simple function `run` that takes no arguments and prints `Hello World!`
- A function `consume` that takes an argument to use as `Hello {}!`
- A function `lowercase_all` that takes an array of strings and returns a new array with these strings converted as lowercase
- A function `for_each` that applies another function (given by pointer itself) to an array of strings

Yes, a lot of languages have `var`/`let`/`auto` to deduce types.
This overview is meant to present the differences in usage though, which often includes writing out the type signatures for use in fields or arguments.

| Language   | Source example                                                                                                                 |
| ---------- | ------------------------------------------------------------------------------------------------------------------------------ |
| C          | https://github.com/Siphalor/function-pointer-madness/blob/f98f1273c9dd57a84e9f1000113a43a28108bac3/src/main.c#L12-L15          |
| C#         | https://github.com/Siphalor/function-pointer-madness/blob/e9b057732a4d7b91255e06b7e6361404cdc266ed/src/csharp/Program.cs#L1-L9 |
| Java       | https://github.com/Siphalor/function-pointer-madness/blob/cb3c17e69531c71b7fea9959fd079565e8729317/src/java/src/main/java/de/Main.java#L9-L14 |
| JavaScript | https://github.com/Siphalor/function-pointer-madness/blob/41f743475159817ed3fa7010997c84d9a72038e4/src/main.js#L4-L6           |
| Python     | https://github.com/Siphalor/function-pointer-madness/blob/a7a91f49ab19edcba61d708276b619b122092320/src/main.py#L4-L7           |
| Rust       | https://github.com/Siphalor/function-pointer-madness/blob/acacfc1d2ed66c4826270e7ca7d44fcdf23e4592/src/rust/src/main.rs#L2-L10                                                                                                   |