#include <stdio.h>

int main() {
	int arr[10];
	int i, c;
	for(i = 0; i < 10; i++) arr[i] = i;
	c = '5';
	arr[c-'0'] = '!';
	for(i = 0; i < 10; i++) printf("%d ", arr[i]);
}
