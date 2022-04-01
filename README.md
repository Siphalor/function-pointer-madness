# function-pointer-madness
How to write function pointer definitions in multiple languages.

In this repo the same functionality is presented in a variety of languages.
This includes function pointers to

- A simple function `run` that takes no arguments and prints `Hello World!`
- A function `consume` that takes an argument to use as `Hello {}!`
- A function `lowercase_all` that takes an array of strings and returns a new array with these strings converted as lowercase

Yes, a lot of languages have `var`/`let`/`auto` to deduce types.
This overview is meant to present the differences in usage though, which often includes writing out the type signatures for use in fields or arguments.

| Language   | Source example                                                                                                                 |
| ---------- | ------------------------------------------------------------------------------------------------------------------------------ |
| C          | https://github.com/Siphalor/function-pointer-madness/blob/22d61aa1375f02fafd8172343bc13ee4ab4adace/src/main.c#L11-L13          |
| C#         | https://github.com/Siphalor/function-pointer-madness/blob/e9b057732a4d7b91255e06b7e6361404cdc266ed/src/csharp/Program.cs#L1-L9 |
| JavaScript | https://github.com/Siphalor/function-pointer-madness/blob/41f743475159817ed3fa7010997c84d9a72038e4/src/main.js#L4-L6           |
| Python     | /src/main.py#L4-L6           |
