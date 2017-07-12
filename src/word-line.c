/*
 * Write a program that prints its input one word per line. 
 */

#include <stdio.h>

int main() {
	int c;
	printf("%c", c-'0');
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n')
			putchar('\n');
		else putchar(c);
	}
}
