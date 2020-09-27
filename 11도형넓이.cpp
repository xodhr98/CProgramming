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
	printf("사각형의 넓이는 %d, 삼각형의 넓이는 %.2f 입니다.\n", sum1, sum2);
}
void main()
{
	int w, h;
	int Rsum = 0;
	float Tsum = 0;
	printf("밑변과 높이를 공백문자를 이용하여 입력하세요\n");
	scanf("%d %d", &w, &h);
	Rsum = rectangle(w, h);
	Tsum = triangle(w, h);

	return print(Rsum, Tsum);

}