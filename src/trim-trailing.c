/* Trim any consecutive whitespace */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isspace(char c) {
	return (int)(c == ' ' || c == '\t' || c == '\n');
}

char* trimtrailing(char* str) {
	int c, i;
	char* buffer = (char*) malloc(strlen(str));
	for(i = 0; (c = getchar()) != EOF; buffer++, i++) {
		if(!isspace(buffer[i-1])) {
			buffer[i] = c;
		}
	}
	buffer[i] = '\0';
	return buffer;
}
