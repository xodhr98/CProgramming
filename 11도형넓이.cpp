#include <stdio.h>
int rectangle(int a, int b) {
	int sum = 0;
	sum = a * b;
	return sum;
}
float triangle(float a, float b) {
	float sum = 0;
	sum = a * b / 2;
	return sum;
}
void print(int sum1, float sum2) {
	printf("�簢���� ���̴� %d, �ﰢ���� ���̴� %.2f �Դϴ�.\n", sum1, sum2);
}
void main()
{
	int w, h;
	int Rsum = 0;
	float Tsum = 0;
	printf("�غ��� ���̸� ���鹮�ڸ� �̿��Ͽ� �Է��ϼ���\n");
	scanf("%d %d", &w, &h);
	Rsum = rectangle(w, h);
	Tsum = triangle(w, h);

	return print(Rsum, Tsum);

}