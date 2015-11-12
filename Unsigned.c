#include <stdio.h>

// This was to test how unsigned ints work, not intended to actually be useful.

int main(){
	unsigned int x, y;
	x = 100;
	y = 101;
	x = x-y;
	printf("%u\n", x);
	return 0;
}
