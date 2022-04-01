﻿unsafe // Function pointers require unsafe context
{
    Action run = () => Console.WriteLine("Hello World");
    Action<String> consume = static (text) => Console.WriteLine($"Hello {text}!"); // Static lambdas are much faster, but may not have a closure.
    Func<string[], string[]> lowercaseAll = static strings => strings.Select(static text => text.ToLower()).ToArray();
    delegate*<IEnumerable<String>, Action<String>, void> forEach = ForEach; // Function pointers require C# 9 or greater and have virtually no overhead compared to method calls.

    run();
    consume("CSharp");
    forEach(lowercaseAll(new[] { "ABC", "DEF" }), consume);
} 

static void ForEach<T>(this IEnumerable<T> sequence, Action<T> fun)
{
    foreach (T element in sequence)
    {
        fun(element);
    }
}
