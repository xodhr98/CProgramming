#include <stdio.h>
#define STD 30 // 전체 학급 인원
#define CUR 3 //입력할 과목 수


int main()
{
	int student, i = 0;
	float sum = 0;
	char name[3][10];
	int score[3][4] = { 0, };
	float avg[3] = { 0 };

	printf("학생 수를 입력하세요.==>");
	scanf("%d", &student);

	if (student > STD) return 0;

	while (i < student) {
		printf("=================================================\n\n");
		printf("학생의 이름을 입력하세요.\n");
		scanf("%s", name[i]);

		int j = 0;
		printf("학생의 국어 영어 수학 점수를 엔터를 이용하여 입력하세요..\n");
		while (true) {
			scanf("%d", &score[i][j]);
			sum = sum + score[i][j];
			j++;
			if (j >= CUR) break;
		}
		avg[i] = (sum / 3);
		sum = 0;

		i++;
	}

	for (int k = 0; k < student; k++) {
		printf("%s 학생의 평균은 %.2f 점입니다.\n", name[k], avg[k]);
	}

}