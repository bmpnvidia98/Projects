#include <stdio.h>

int main(){
	int n, j, i, p;
	printf("How tall do you want the triangle to be?:\n");
	scanf("%d", &n);

for(j = n; j!=0; j--){
	for(i = 0 ; i <= j-1 ; i++){
		printf(" ");
	}
	for(p = (2*(n-j)) +1; p!=0; p--){ 
		printf("*");
	}
	printf("\n");
}
	return 0;
}
