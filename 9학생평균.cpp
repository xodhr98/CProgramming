#include <stdio.h>
#define STD 30 // ��ü �б� �ο�
#define CUR 3 //�Է��� ���� ��


int main()
{
	int student, i = 0;
	float sum = 0;
	char name[3][10];
	int score[3][4] = { 0, };
	float avg[3] = { 0 };

	printf("�л� ���� �Է��ϼ���.==>");
	scanf("%d", &student);

	if (student > STD) return 0;

	while (i < student) {
		printf("=================================================\n\n");
		printf("�л��� �̸��� �Է��ϼ���.\n");
		scanf("%s", name[i]);

		int j = 0;
		printf("�л��� ���� ���� ���� ������ ���͸� �̿��Ͽ� �Է��ϼ���..\n");
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
		printf("%s �л��� ����� %.2f ���Դϴ�.\n", name[k], avg[k]);
	}

}