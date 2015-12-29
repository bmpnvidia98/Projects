// Created by Brian Peters on Thu Nov 12 16:09:27 2015
#include <stdio.h>

void printgraph(char graph[10][10]){
	int i, j;
	for(j = 9; j>=0; j--){
		for(i = 0; i<=9; i++){
			if((graph[i][j]<='9' && graph[i][j]>='0') || graph[i][j] == 'O'){
			putchar(graph[i][j]);
			}
			else 
				putchar('+');
		
	}printf("\n");
}
}
int main(){
	char c, graph[10][10];
	int i, j, onoroff, numchar[10];
	for(i = 9; i>=0; i--)
		graph[0][i] = ('0'+i);
	for(j=9;j>=0; j--)
		graph[j][0] = ('0'+j);
	for(j=0;j<=9;j++)
		numchar[j] = 0;
	onoroff = 1;
	i = 0;
	while((c = getchar()) != EOF){
	if(graph[1][9] == 'O' || graph[2][9] == 'O' || graph[3][9] == 'O' || graph[9][4] == 'O' || graph[5][9] == 'O' || graph[6][9] == 'O' || graph[7][9] == 'O' || graph[8][9] == 'O' || graph[9][9] == 'O'){
		printgraph(graph);
		return 0;
		}
	if(c == ' '|| c == '\n' || c == '\t'){
		if(onoroff == 1&& i!=0){
			numchar[i]++;
			graph[i][numchar[i]] = 'O';
		}	
		printgraph(graph);
	onoroff = 0;
	i = 0;
		}
	else if(onoroff == 1){
		i++;
			}
	else if(onoroff == 0){
		onoroff = 1;
		i++;
			}
		}
	return 0;
}
