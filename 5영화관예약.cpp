#include <stdio.h>
#define M1 "1. ���� ������ ��\n"
#define M2 "2. ������ ����\n"
#define M3 "3. Ÿ��Ÿ��(3D)\n"
#define M4 "4. �ڳ�-�����ǽô�\n"

int main() {
	char name[10];
	int age;
	int num;

	printf("���� �ó׸��� ���Ű��� ȯ���մϴ�.\n\n");
	printf("�������� �̸� �� ���̸� ���鹮�ڷ� �����Ͽ� �Է��ϼ���. ==>");
	scanf("%s %d", name, &age);

	printf("%s ���� ���� ������ ��ȭ�Դϴ�.\n\n", name);

	printf("=============================\n");
	if (age > 1 && age <= 99)
	{
		printf(M1);
		if (age >= 12)
			printf(M2);
		if (age >= 15)
			printf(M3);
		if (age >= 18)
			printf(M4);
	}
	printf("=============================\n\n");
	printf("���ϴ� ��ȭ ��ȣ�� �Է��ϼ���. ==>");
	scanf("%d", &num);

	switch (num) {
	case 1:
		if (age > 1 && age <= 99)
			printf("��ȭ ���Ű� ����˴ϴ�.\n");
		else
			printf("�߸� �����̽��ϴ�.\n");
		break;
	case 2:
		if (age >= 12)
			printf("��ȭ ���Ű� ����˴ϴ�.\n");
		else
			printf("�߸� �����̽��ϴ�.\n");
		break;
	case 3:
		if (age >= 15)
			printf("��ȭ ���Ű� ����˴ϴ�.\n");
		else
			printf("�߸� �����̽��ϴ�.\n");
		break;
	case 4:
		if (age >= 18)
			printf("��ȭ ���Ű� ����˴ϴ�.\n");
		else
			printf("�߸� �����̽��ϴ�.\n");
		break;

	default:
		printf("�߸� �����̽��ϴ�.\n");
		break;
	}

}