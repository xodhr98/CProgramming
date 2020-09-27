#include <stdio.h>
#include <stdlib.h>

int main() {
	int student;
	int *mscore;
	int *fscore;
	double *avg;

	printf("학생 수를 입력하세요 ==>");
	scanf("%d", &student);

	avg = (double*)malloc(sizeof(double)*student);
	mscore = (int*)malloc(sizeof(int)*student);
	fscore = (int*)malloc(sizeof(int)*student);

	if (avg == NULL) {
		printf("메모리 할당 문제\n");
		exit(1);
	}
	if (mscore == NULL) {
		printf("메모리 할당 문제\n");
		exit(1);
	}
	if (fscore == NULL) {
		printf("메모리 할당 문제\n");
		exit(1);
	}
	printf("학생 수만큼 반복하여 중간고사, 기말고사 점수를 스페이스로 구분해서 입력하세요.\n");
	for (int i = 0; i < student; i++) {
		scanf("%d %d", mscore + i, fscore + i);
	}
	for (int i = 0; i < student; i++) {
		avg[i] = (double)(mscore[i] + fscore[i]) / 2;
	}
	for (int i = 0; i < student; i++) {
		printf("%d번째 학생의 중간고사 %d, 기말고사 %d, 평균점수 %.2lf\n", i + 1, *(mscore + i), *(fscore + i), *(avg + i));
	}
	free(mscore);
	free(fscore);
	free(avg);
}