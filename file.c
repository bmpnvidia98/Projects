#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
	char filen[20];
	scanf("%s", filen);

	FILE *fp;
	fp = fopen(filen, "w");

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
