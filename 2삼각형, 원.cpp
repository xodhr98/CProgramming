#include <stdio.h>
#define PI 3.14
#define WORD "���̴� %.2f�Դϴ�.\n"
int main(void)
{
	int v, h, r;
	float area;

	printf("�ﰢ�� �غ� �� ���̸� ������ ����Ͽ� �Է��ϼ���==> ");
	scanf("%d %d", &v, &h);

	area = ((float)v * h) / 2;
	printf("�ﰢ���� " WORD, area);


	printf("���� �������� �Է��ϼ���==> ");
	scanf("%d", &r);

	area = (float)r * r * PI;
	printf("���� " WORD, area);

	return 0;
}
