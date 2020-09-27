#include <stdio.h>
int main()
{
	int student[3][4] = { 0, };
	float subject[4] = { 0 }; //과목별 평균 점수
	int i, j;

	printf("성적 관리 시스템입니다.\n\n");
	for (i = 0; i < 3; i++) {
		printf("\n%d번째 학생의 4개의 과목 <국어, 영어, 수학, 과학> 점수를 입력하세요.\n", i + 1);
		for (j = 0; j < 4; j++) {
			scanf("%d", &student[i][j]);
			subject[j] = subject[j] + student[i][j];
		}
	}
	for (int k = 0; k < 4; k++) {
		printf("\n%d번째 과목의 평균 점수는 %.2f점 입니다.\n\n", k + 1, subject[k] / 3);
	}

	return 0;
}