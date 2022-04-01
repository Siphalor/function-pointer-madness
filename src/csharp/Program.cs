unsafe // Function pointers require unsafe context
{
    Action run = () => Console.WriteLine("Hello World");
    Action<string> consume = static (text) => Console.WriteLine($"Hello {text}!");
    Func<string[], string[]> lowercaseAll = static strings => strings.Select(static text => text.ToLower()).ToArray();
    delegate*<IEnumerable<string>, Action<string>, void> forEach = &ForEach;

    run();
    consume("CSharp");
    forEach(lowercaseAll(new[] { "ABC", "DEF" }), consume);
}

static void ForEach<T>(IEnumerable<T> sequence, Action<T> fun)
{
    foreach (T element in sequence)
    {
        fun(element);
    }
}
