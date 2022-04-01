from typing import Callable, List

def main():
    run: Callable[[], None] = lambda: print("Hello World!")
    consume: Callable[[str], None] = lambda text: print(f"Hello {text}!")
    lowercase_all: Callable[[List[str]], str] = lambda strings: map(str.lower, strings)

    run()
    consume("Python")
    for s in lowercase_all(["ABC", "DEF"]):
        consume(s)

main()
