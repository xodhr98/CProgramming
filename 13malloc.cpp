#include <stdio.h>
#include <stdlib.h>

int main() {
	int student;
	int *mscore;
	int *fscore;
	double *avg;

	printf("�л� ���� �Է��ϼ��� ==>");
	scanf("%d", &student);

	avg = (double*)malloc(sizeof(double)*student);
	mscore = (int*)malloc(sizeof(int)*student);
	fscore = (int*)malloc(sizeof(int)*student);

	if (avg == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	if (mscore == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	if (fscore == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	printf("�л� ����ŭ �ݺ��Ͽ� �߰����, �⸻��� ������ �����̽��� �����ؼ� �Է��ϼ���.\n");
	for (int i = 0; i < student; i++) {
		scanf("%d %d", mscore + i, fscore + i);
	}
	for (int i = 0; i < student; i++) {
		avg[i] = (double)(mscore[i] + fscore[i]) / 2;
	}
	for (int i = 0; i < student; i++) {
		printf("%d��° �л��� �߰���� %d, �⸻��� %d, ������� %.2lf\n", i + 1, *(mscore + i), *(fscore + i), *(avg + i));
	}
	free(mscore);
	free(fscore);
	free(avg);
}