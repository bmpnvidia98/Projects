#include <stdio.h>

// This was to test how unsigned ints work, not intended to actually be useful.

int main(){
	int c, nc, ns, nt, nl;
	for(c = getchar(); getchar() != EOF; ++nc){
	if(getchar() == ' ')
	ns++;
	if(getchar() == '\t')
	nt++;
	if(getchar() == '\n')
	nl++;
	printf("%c\n", c);
	}
	printf("%d\n", nl);
	printf("%d\n", nt);
	printf("%d\n", nc);
	printf("%d\n", ns);
}
