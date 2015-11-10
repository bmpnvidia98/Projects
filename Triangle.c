#include <stdio.h>

int main(){
	int n;
	int j;
	int i;
	int l;
	printf("How tall do you want the triangle to be?:\n");
	scanf("%d", &n);

for(j = n; j!=0; j--){
	for(i = 0 ; i <= j-1 ; i++){
		printf(" ");
	}
	for(l=n; l>=j; l--){
		printf("*");
	}
	for(l=n; l>j; l--){
		printf("*");
	}
	printf("\n");
}
	return 0;
}
