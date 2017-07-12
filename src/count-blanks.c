/* Count spaces, newlines, and tabs. */

#include <stdio.h>

int main() {
	int c, ns;
	ns = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n') {
			++ns;
		}
	}
	return ns;
}
