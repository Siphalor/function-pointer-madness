#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void run_fn(void);
void consume_fn(const char *);
char **lowercase_all_fn(const char*[], size_t);

int main() {
	void (*run)(void) = run_fn;
	void (*consume)(const char *) = consume_fn;
	char **(*lowercase_all)(const char *[], size_t) = lowercase_all_fn;

	run();
	consume("C");
	const char *strings[] = { "ABC", "DEF" };
	char **lower_strings = lowercase_all(strings, 2);
	if (lower_strings != NULL) {
		for (size_t i = 0; i < 2; i++) {
			char *lower_string = lower_strings[i];
			consume(lower_string);
			free(lower_string);
		}
		free(lower_strings);
	}
}

void run_fn(void) {
	puts("Hello World!");
}

void consume_fn(const char *text) {
	printf("Hello %s!\n", text);
}

char **lowercase_all_fn(const char *strings[], size_t count) {
	char **new_strings = malloc(count * sizeof(char*));
	if (new_strings == NULL) {
		return NULL;
	}

	char **new_strings_iter = new_strings;
	for (size_t i = 0; i < count; i++) {
		const char *string = *(strings++);
		char *new_string = malloc(strlen(string));

		char c;
		char *new_iter = new_string;
		while ((c = *(string++)) != 0) {
			*(new_iter++) = tolower(c);
		}

		*(new_strings_iter++) = new_string;
	}
	return new_strings;
}
