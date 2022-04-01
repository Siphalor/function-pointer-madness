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

| Language                                                                | Source example                                                                                                                                |
| ----------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------- |
| [C](https://uncyclopedia.com/wiki/C)                                    | https://github.com/Siphalor/function-pointer-madness/blob/200b3b048421ae981e37d5ec12091d8e8cbebd2e/src/main.c#L12-L15                         |
| [C#](https://uncyclopedia.com/wiki/C_Sharp)                             | https://github.com/Siphalor/function-pointer-madness/blob/c01c83973adbf8b9965b1ecc93a7df1290e4c568/src/csharp/Program.cs#L3-L6                |
| [C++](https://en.uncyclopedia.co/wiki/C%2B%2B)                          | /src/cpp/main.cpp#L16-L19                                                                                                                     |
| [Haskell](https://uncyclopedia.com/wiki/Haskell)                        | https://github.com/Siphalor/function-pointer-madness/blob/27f45107a2ebebbe29e7c4df493124599e742e86/src/haskell/main.hs#L7-L9                  |
| [Java](https://uncyclopedia.com/wiki/Java)                              | https://github.com/Siphalor/function-pointer-madness/blob/cb3c17e69531c71b7fea9959fd079565e8729317/src/java/src/main/java/de/Main.java#L9-L14 |
| [JavaScript](https://uncyclopedia.com/wiki/JavaScript)                  | https://github.com/Siphalor/function-pointer-madness/blob/41f743475159817ed3fa7010997c84d9a72038e4/src/main.js#L4-L6                          |
| [Python](https://en.uncyclopedia.co/wiki/Python_(programming_language)) | https://github.com/Siphalor/function-pointer-madness/blob/a7a91f49ab19edcba61d708276b619b122092320/src/main.py#L4-L7                          |
| [Rust](https://uncyclopedia.com/wiki/Rust_(programming_language))       | https://github.com/Siphalor/function-pointer-madness/blob/55ab39c74db2279f852fe572d61c7e9e103a6354/src/rust/src/main.rs#L2-L5                 |
