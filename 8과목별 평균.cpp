#include <stdio.h>
int main()
{
	int student[3][4] = { 0, };
	float subject[4] = { 0 }; //���� ��� ����
	int i, j;

	printf("���� ���� �ý����Դϴ�.\n\n");
	for (i = 0; i < 3; i++) {
		printf("\n%d��° �л��� 4���� ���� <����, ����, ����, ����> ������ �Է��ϼ���.\n", i + 1);
		for (j = 0; j < 4; j++) {
			scanf("%d", &student[i][j]);
			subject[j] = subject[j] + student[i][j];
		}
	}
	for (int k = 0; k < 4; k++) {
		printf("\n%d��° ������ ��� ������ %.2f�� �Դϴ�.\n\n", k + 1, subject[k] / 3);
	}

	return 0;
}