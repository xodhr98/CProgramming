#include <stdio.h>
#define A_COURCE 30000
#define B_COURCE 20000
#define C_COURCE 10000

int main()
{
	char date[9];
	int num;
	int sum;

	printf("�������. ���� ������� ���� ���α׷��Դϴ�.\n\n");
	printf("���� ��¥ 8�ڸ��� �Է����ּ���. ==>");
	scanf("%s", date);
	printf("���� ��¥�� %c%c%c%c�� %c%c�� %c%c�� �Դϴ�.\n\n", date[0], date[1], date[2], date[3], date[4], date[5], date[6], date[7]);

	printf("���� �ο��� �Է����ּ���. ==>");
	scanf("%d", &num);
	if (num <= 5)
		printf("�ο��� 5�� �����̹Ƿ� Room C�� �����˴ϴ�.\n\n");
	else {
		if (num > 5 && num <= 10)
			printf("�ο��� 6~10�� �̹Ƿ� Room B�� �����˴ϴ�.\n\n");
		else {
			if (num >= 11)
				printf("�ο��� 11�� �̻��̹Ƿ� Room A�� �����˴ϴ�.\n\n");
		}
	}

	char dish;
	printf("�丮�� �������ּ���. <A�ڽ�: 30000��, B�ڽ�: 20000��, C�ڽ�: 10000��> ==>");
	getchar();
	scanf("%c", &dish);

	switch (dish) {
	case 'A':
		sum = A_COURCE * num;
		printf("�� �ݾ��� %d�� �Դϴ�.\n\n", sum);
		break;
	case 'B':
		sum = B_COURCE * num;
		printf("�� �ݾ��� %d�� �Դϴ�.\n\n", sum);
		break;
	case 'C':
		sum = C_COURCE * num;
		printf("�� �ݾ��� %d�� �Դϴ�.\n\n", sum);
		break;
	default: printf("�� �ݾ��� 0���Դϴ�.\n\n");
	}
}