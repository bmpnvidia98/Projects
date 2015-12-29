#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if(argc<2){
		printf("You need to have a filename\n");
		return 1;
		}
	char fname[20];
	strcpy(fname, argv[1]);
	strcat(fname, ".c");
	FILE *fp;
	fp = fopen(fname, "w");

	if(fp == NULL){
		printf("Couldn't open file: Error\n");
		return 1;
	}
	time_t mytime;
	mytime = time(NULL);
	fprintf(fp, "// Created by Brian Peters on %s\n", ctime(&mytime));
	fprintf(fp, "#include <stdio.h>\n");
	fprintf(fp, "\n");
	fprintf(fp, "int main(){\n");
	fprintf(fp, "\n");
	fprintf(fp, "\treturn 0;\n");
	fprintf(fp, "}\n");
	return 0;
}
