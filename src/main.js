// JavaScript

function main() {
    const run = () => console.log("Hello World!");
    const consume = text => console.log(`Hello ${text}!`)
    const lowercaseAll = strings => strings.map(string => string.toLowerCase());

    run();
    consume("JavaScript");
    lowercaseAll(["ABC", "DEF"]).forEach(consume);
}