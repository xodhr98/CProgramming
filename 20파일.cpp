#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main() {

	FILE *input_file, *output_file;
	input_file = fopen("C:\\Users\\TAEOK\\Desktop\\input.txt", "rw");
	output_file = fopen("C:\\sers\\TAEOK\\Desktop\\output.txt", "rw");

	int n1;
	int n2;
	int sum = 0;
	char a[4] = "100";
	char b[4] = "200";

	if (feof(input_file) == NULL) return 0;
	fputs(a, input_file);
	fscanf(input_file, "%s", n1=atoi(a));
	fclose(input_file);

	if (feof(output_file) == NULL) return 0;
	fputs(b, output_file);
	fscanf(output_file, "%s", n2 = atoi(b));
	fclose(output_file);

	sum = n1 * n2;

	printf("%d¿‘¥œ¥Ÿ.", sum);

	return 0;
}