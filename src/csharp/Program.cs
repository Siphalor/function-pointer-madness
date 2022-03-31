using System;

namespace FunctionPointerMadness;

public static class Program
{
    public static unsafe void Main()
    {
        // A run of the mill lambda
        Action run = () => Console.WriteLine("Hello World");
        // Function pointers require C# 9 or greater and have virtually no overhead compared to method calls.
        delegate*<string, void> consume = &Consume;
        // Static lambdas are much faster, but may not have a closure.
        Func<string[], string[]> lowercaseAll = strings => strings.Select(static text => text.ToLower()).ToArray();

        run();
        consume("CSharp");
        foreach (string text in lowercaseAll(new[] { "ABC", "DEF" }))
        {
            consume(text);
        }
    }

    private static void Consume(string text)
    {
        Console.WriteLine($"Hello {text}!");
    }
}