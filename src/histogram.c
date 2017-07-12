/* Exercise 1-13.
 * Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars
 * horizontal; a vertical orientation is more challenging. 
 * Exercise 1-14. Write a program to print a histogram of the
 * frequencies of different characters in its input. 
 */

#include <stdio.h>

int main() {
	/* Only accounts for words of lengths 1 - 9 */

	int c, i, j;
	int lengths[10];
	int buffer = 0;

	/* initialize array */
	for(i = 0; i < 10; i++) lengths[i] = 0;

	/* Collect word lengths */
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n') {
			if(buffer < 10) lengths[buffer]++;
			buffer = 0;
		}
		else ++buffer;
	}
	lengths[buffer]++; /* Account for last element */

	/* Print the histogram */
	for(i = 0; i < 10; i++) {
		int size = lengths[i];
		printf("[len %2d] ", i);
		for(j = 0; j < size; j++) putchar('|');
		printf("\n");
	}
}
