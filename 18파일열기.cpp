#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int main() {
	int i;
	int n = 0;
	int sum = 0;

	FILE *fp = fopen("C:\\Users\\TAEOK\\Desktop\\1.txt", "r");
	while (fscanf(fp, "%d", &i) != EOF) {
		sum += i;
		++n;
	}
	if (n == 0) {
		printf("데이터 없음\n");
	}
	else
		printf("파일에서 읽어온 숫자의 총 합은 %d입니다.\n\n", sum);

	fclose(fp);
	system("pause");
	return 0;
}