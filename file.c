#include <stdio.h>

int main(int argc, char *argv[]) {
	char filen[20];
	scanf("%s", filen);

	FILE *fp;
	fp = fopen(filen, "w");

	if(fp == NULL){
		printf("Couldn't open file: Error");
		return 1;
	}
	fprintf(fp, "#include <stdio.h>\n");
	fprintf(fp, "\n");
	fprintf(fp, "int main(){\n");
	fprintf(fp, "\n");
	fprintf(fp, "\treturn 0;\n");
	fprintf(fp, "}\n");
	return 0;
}
