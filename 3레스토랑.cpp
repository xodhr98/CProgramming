#include <stdio.h>
#define WORD "<���� �ֹ� �� �ݾ�: %d>\n\n"

int main(void)
{
	int menu, drink, price;

	printf("\"���� �������\"�� ���Ű��� ȯ���մϴ�!!\n\n");

	printf("======= Main Menu ========\n");
	printf("1. ���� �Ľ�Ÿ : 16000��\n");
	printf("2. ���� �Ľ�Ÿ : 18000��\n");
	printf("3. �������� ���� : 20000��\n");
	printf("4. �������� ����: 22000��\n");
	printf("==========================\n\n");

	printf("���� �޴��� �����ϼ��� : ");
	scanf("%d", &menu);


	switch (menu) {
	case 1: // �޴�����
		price = 16000;
		printf(WORD, price);

		printf("======= Drink ========\n");
		printf("1. �Ҵ� : 3000��\n");
		printf("2. ���̵� : 4000��\n");
		printf("3. ������ �ֽ� : 6000��\n");
		printf("======================\n");

		printf("���Ḧ �����ϼ��� : ");
		scanf("%d", &drink);
		switch (drink) {
		case 1:
			price += 3000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		case 2:
			price += 4000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		case 3:
			price += 6000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		default://�׿�
			printf("�߸� �����̽��ϴ�." WORD, price);
			break;
		}
		break;
	case 2: // �޴�����
		price = 18000;
		printf(WORD, price);

		printf("======= Drink ========\n");
		printf("1. �Ҵ� : 3000��\n");
		printf("2. ���̵� : 4000��\n");
		printf("3. ������ �ֽ� : 6000��\n");
		printf("======================\n");

		printf("���Ḧ �����ϼ��� : ");
		scanf("%d", &drink);
		switch (drink) {
		case 1:
			price += 3000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		case 2:
			price += 4000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		case 3:
			price += 6000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		default://�׿�
			printf("�߸� �����̽��ϴ�." WORD, price);
			break;
		}
		break;
	case 3: // �޴�����
		price = 20000;
		printf(WORD, price);

		printf("======= Drink ========\n");
		printf("1. �Ҵ� : 3000��\n");
		printf("2. ���̵� : 4000��\n");
		printf("3. ������ �ֽ� : 6000��\n");
		printf("======================\n");

		printf("���Ḧ �����ϼ��� : ");
		scanf("%d", &drink);
		switch (drink) {
		case 1:
			price += 3000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		case 2:
			price += 4000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		case 3:
			price += 6000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		default://�׿�
			printf("�߸� �����̽��ϴ�." WORD, price);
			break;
		}
		break;
	case 4: // �޴�����
		price = 22000;
		printf(WORD, price);

		printf("======= Drink ========\n");
		printf("1. �Ҵ� : 3000��\n");
		printf("2. ���̵� : 4000��\n");
		printf("3. ������ �ֽ� : 6000��\n");
		printf("======================\n");

		printf("���Ḧ �����ϼ��� : ");
		scanf("%d", &drink);
		switch (drink) {
		case 1:
			price += 3000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		case 2:
			price += 4000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		case 3:
			price += 6000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		default://�׿�
			printf("�߸� �����̽��ϴ�." WORD, price);
			break;
		}
		break;
	default://�׿�
		int price = 0;
		printf("�߸� �����̽��ϴ�." WORD, price);
		printf("======= Drink ========\n");
		printf("1. �Ҵ� : 3000��\n");
		printf("2. ���̵� : 4000��\n");
		printf("3. ������ �ֽ� : 6000��\n");
		printf("======================\n");

		printf("���Ḧ �����ϼ��� : ");
		scanf("%d", &drink);
		switch (drink) {
		case 1:
			price += 3000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		case 2:
			price += 4000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		case 3:
			price += 6000;
			printf(WORD, price);
			printf("�ֹ��� �Ϸ�Ǿ����ϴ�.\n");
			break;
		default://�׿�
			printf("�߸� �����̽��ϴ�." WORD, price);
			break;
		}
	}
}