// Created by Brian Peters on Tue Nov 17 01:14:03 2015

#include <stdio.h>
#include <ctype.h>

char board[8][8] = {{'r','n','b','k','q','b','n','r'},{'p','p','p','p','p','p','p','p'},{'_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_'},{'_','_','_','_','_','_','_','_'},{'P','P','P','P','P','P','P','P'},{'R','N','B','K','Q','B','N','R'}};

void printb(){
	extern char board[8][8];
	int i, j;
	for(i=7;i>=0;++i){
		for(j=0;j<=7;j++){
			printf("%2c", board[i][j]);
			}
		putchar('\n');
		}
	putchar('\n');
	putchar('\n');
}
int main(){
	char ix, iy, mov, fx, fy; // Initial X, Initial Y, Move, Final X, Final Y
	printb();
	scanf("%c%c%c%c%c",ix, iy, mov, fx, fy);
		if(ix == ' ' ||iy == ' ' ||mov == ' ' ||fx == ' ' ||fy == ' '){
			printf("You must enter in format (X-coord)(Y-coord)(Move/attack)(X-coord)(Y-coord)\n");
			printf("Moves are denoted as \"-\", and attacks are \"x\"\n");
				}
		

	printb();
	return 0;
}
