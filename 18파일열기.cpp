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
		printf("������ ����\n");
	}
	else
		printf("���Ͽ��� �о�� ������ �� ���� %d�Դϴ�.\n\n", sum);

	fclose(fp);
	system("pause");
	return 0;
}