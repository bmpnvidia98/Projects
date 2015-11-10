//		Code written by Brian Peters
//		Written For the purpose of learning C
//	
//
//
//	N	E	W	T	O	N	'	S
//		M	E	T	H	O	D
//
//
#include <stdio.h>
#include <math.h>

int main(){
	double x[20];
	int i;
	int y;
	int j;
	printf("Choose an x-value to use to approximate:\n");
		scanf("%lf", &x[0]);
	printf("Choose a value to approximate:\n");
		scanf("%d", &y);
	printf("How many iterations do you want to make (Max:20):\n");
		scanf("%d", &j);
	for(i=0; i< j; i++){
	x[i+1] = x[i] - (((x[i] * x[i]) - y) / (2*x[i]));
	}
	printf("%f\n", x[j]);
	return 0;
}

