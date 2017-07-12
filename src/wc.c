/* Barebones implementation of the UNIX program wc. */

#include <stdio.h>

#define IN 1 /* inside of a word */
#define OUT 0 /* outside of a word */

int main() {
	int nc, nw, nl, c, state;
	nc = nw = nl = 0;
	state = OUT;
	while((c = getchar()) != EOF) {
		++nc;
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if(state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("lines[%d]:words[%d]:chars[%d]", nl, nw, nc);
}
