#include <stdio.h>
#include <stdlib.h>

int main() {
	int student;
	char *name[10];
	int **score;
	double *avg = 0;
	int sum = 0;

	printf("�л� ���� �Է��ϼ��� ==>");
	scanf("%d", &student);

	for (int i = 0; i < student; i++) {

		name[i] = (char*)malloc(sizeof(char) * 10);

		printf("\n=========================================\n");
		printf("�л��� �̸��� �Է��ϼ���.\n");
		scanf("%s", name[i]);

		score = (int**)malloc(sizeof(int*) *student);
		avg = (double*)malloc(sizeof(double)*student);

		printf("�л��� ���� ���� ���� ������ ���͸� �̿��Ͽ� �Է��ϼ���.\n");
		scanf("%d", &score[i][0]);
		score = (int**)malloc(sizeof(int*) *student);
		scanf("%d", &score[i][1]);
		score = (int**)malloc(sizeof(int*) *student);
		scanf("%d", &score[i][2]);

		sum = score[i][0] + score[i][1] + score[i][2];
		avg[i] = sum / 3.00;
	}
	for (int i = 0; i < student; i++) {
		printf("%s �л��� ����� %.2lf ���Դϴ�.\n", name[i],avg[i]);
	}
}