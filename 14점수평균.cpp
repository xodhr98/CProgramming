#include <stdio.h>
#include <stdlib.h>

int main() {
	int student;
	char *name[10];
	int **score;
	double *avg = 0;
	int sum = 0;

	printf("학생 수를 입력하세요 ==>");
	scanf("%d", &student);

	for (int i = 0; i < student; i++) {

		name[i] = (char*)malloc(sizeof(char) * 10);

		printf("\n=========================================\n");
		printf("학생의 이름을 입력하세요.\n");
		scanf("%s", name[i]);

		score = (int**)malloc(sizeof(int*) *student);
		avg = (double*)malloc(sizeof(double)*student);

		printf("학생의 국어 영어 수학 점수를 엔터를 이용하여 입력하세요.\n");
		scanf("%d", &score[i][0]);
		score = (int**)malloc(sizeof(int*) *student);
		scanf("%d", &score[i][1]);
		score = (int**)malloc(sizeof(int*) *student);
		scanf("%d", &score[i][2]);

		sum = score[i][0] + score[i][1] + score[i][2];
		avg[i] = sum / 3.00;
	}
	for (int i = 0; i < student; i++) {
		printf("%s 학생의 평균은 %.2lf 점입니다.\n", name[i],avg[i]);
	}
}