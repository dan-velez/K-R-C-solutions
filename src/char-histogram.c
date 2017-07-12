/*
 * Outputs a histogram of frequencies of different characters
 * in a file.
 */

#include <stdio.h>

int main() {
	char chars[26];
	int i, c, j;

	/* Initialize array */
	for(i = 0; i < 26; i++) chars[i] = 0;

	while((c = getchar()) != EOF) {
		chars[c-'a']++;
	}

	/* Print the histogram */
	for(i = 0; i < 26; i++) {
		printf("[%c]: ", i+'a');
		for(j = 0; j < chars[i]; j++) putchar('|');
		printf("\n");
	}
}
