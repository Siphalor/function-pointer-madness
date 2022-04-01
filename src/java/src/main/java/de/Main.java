package de;

import java.util.function.BiConsumer;
import java.util.function.Consumer;
import java.util.function.Function;

public class Main {
	public static void main(String[] args) {
		Runnable run = () -> System.out.println("Hello World");
		Consumer<String> consume = text -> System.out.println("Hello " + text + "!");
		Function<String[], String[]> lowercaseAll = Main::lowercaseAllFn;
		BiConsumer<String[], Consumer<String>> forEach = Main::forEachFn;
		// Alternative, to keep generic method - create and use separate interface:
		ForEachInterface forEach2 = Main::forEachFn;

		run.run();
		consume.accept("Java");
		forEach.accept(lowercaseAll.apply(new String[] { "ABC", "DEF" }), consume);
	}

	public static String[] lowercaseAllFn(String[] strings) {
		String[] newStrings = new String[strings.length];
		for (int i = 0; i < strings.length; i++) {
			newStrings[i] = strings[i].toLowerCase();
		}
		return newStrings;
	}

	public static <T> void forEachFn(T[] array, Consumer<T> consumer) {
		for (T element : array) {
			consumer.accept(element);
		}
	}

	@FunctionalInterface
	public interface ForEachInterface {
		<T> void forEach(T[] array, Consumer<T> consumer);
	}
}
