#include <stdio.h>
#define WORD "�Է��ϼ��� ==>"
int main(void)
{
	char name[10];
	char blood[10];
	int num;
	float left, right;

	printf("�̸��� " WORD);
	scanf("%s", &name);
	printf("�й��� " WORD);
	scanf("%d", &num);
	printf("���� �÷��� " WORD);
	scanf("%f", &left);
	printf("������ �÷��� " WORD);
	scanf("%f", &right);
	printf("�������� " WORD);
	scanf("%s", &blood);

	printf("======= ������ ======\n");
	printf("�̸�: %s\n", name);
	printf("�й�: %d\n", num);
	printf("���� �÷�: %0.1f\n", left);
	printf("������ �÷�: %0.1f\n", right);
	printf("������: %s\n", blood);
	printf("=====================\n");

	return 0;
}