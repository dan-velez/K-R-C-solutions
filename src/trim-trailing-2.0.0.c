/* Trim trailing without the use of malloc */

#include <stdio.h>

/* Symbols for state machine */
#define WORD  1
#define SPACE 0

int main() {
	int state = SPACE;
	int c;
	
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			if(state == WORD) putchar(c);
			state = SPACE;
		}
		else {
			putchar(c);
			state = WORD;
		}
	}
}
