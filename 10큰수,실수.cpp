#include <stdio.h>
float max(float x, float y) {
	float M;
	if (x > y)
		M = x;
	else M = y;

	return M;
}
void printResult(float result) {
	printf("%.2f가 큰 수 입니다.\n", result);
}

int main() {

	float A, B;
	printf("두 개의 실수를 space로 구분하여 입력하세요 ==>");
	scanf("%f %f", &A, &B);

	float MAX = max(A, B);

	printResult(MAX);
}