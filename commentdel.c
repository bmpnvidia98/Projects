// Created by Brian Peters on Thu Nov 26 12:42:00 2015

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	char fname[20],fname1[20];
	int c, prevc;
		if(argc < 2){
		printf("You need to have a filename, in format ./commentdel (filename)\n");
		return 0;
		}
	strcpy(fname, argv[1]);
	strcpy(fname1, fname);
	strcat(fname, ".c");
	strcat(fname1, "nocom.c");
	FILE *fp;
	FILE *fp1;
	fp = fopen(fname, "r");
	fp1 = fopen(fname1, "w");
	prevc = '0';
	while((c = getc(fp)) != EOF){
		if(c != '/' && prevc == '/'){
			if(c == '*')
				while(c != '/' && prevc != '*'){
					c = getc(fp);
					prevc = c;}
			else fprintf(fp1, "/");
				}
		else if(c == '/' && prevc != '/')
			goto b;
		else if(c == '/' && prevc == '/')
			while(c != '\n'){
				c = getc(fp);
				prevc = c;
				}
		else {fprintf(fp1, "%c", c);}
		b:
		prevc = c;
		}
		
	return 0;
}
