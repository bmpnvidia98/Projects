// Created by Brian Peters on Thu Nov 26 12:42:00 2015

#include <stdio.h>
#include <string.h>
#define DEFAULT 0
#define QUOTES 1

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
		if(c == '*' && prevc == '/'){
			while((c = getc(fp)) != '/' || prevc != '*'){
				prevc = c;
				}
			}
		else if(c == '/' && prevc != '/')
			goto b;
		else if(c == '/' && prevc == '/'){
			while(c != '\n'){
				c = getc(fp);
				prevc = c; 
				}
			fprintf(fp1, "%c", c);
			}
		else if(c == '"'){
				fprintf(fp1, "%c", c);
			while((c = getc(fp)) != '"'){
				fprintf(fp1, "%c", c);
				prevc = c;
					}
			fprintf(fp1, "%c", c);
			}
		else if(c == '\''){
				fprintf(fp1, "%c", c);
			while((c = getc(fp)) != '\''){
				fprintf(fp1, "%c", c);
				prevc = c;
					}
			fprintf(fp1, "%c", c);
			}
		else {fprintf(fp1, "%c", c);}
		b:
		prevc = c;
		}
		
	return 0;
}
