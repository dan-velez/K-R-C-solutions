/* Copy input to output, replace each tab by '\t' and each
 * backspace with '\b'.
 */

#include <stdio.h>

int main() {
	int c;
	while((c = getchar()) != EOF) {
		if(c == '\t') printf("\\t");
		else if(c == '\b') printf("\\b");
		else if(c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else putchar(c);
	}
}
