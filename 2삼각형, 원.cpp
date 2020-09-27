#include <stdio.h>
#define PI 3.14
#define WORD "넓이는 %.2f입니다.\n"
int main(void)
{
	int v, h, r;
	float area;

	printf("삼각형 밑변 및 높이를 공백을 사용하여 입력하세요==> ");
	scanf("%d %d", &v, &h);

	area = ((float)v * h) / 2;
	printf("삼각형의 " WORD, area);


	printf("원의 반지름을 입력하세요==> ");
	scanf("%d", &r);

	area = (float)r * r * PI;
	printf("원의 " WORD, area);

	return 0;
}
