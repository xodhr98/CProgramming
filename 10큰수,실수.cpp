#include <stdio.h>
float max(float x, float y) {
	float M;
	if (x > y)
		M = x;
	else M = y;

	return M;
}
void printResult(float result) {
	printf("%.2f�� ū �� �Դϴ�.\n", result);
}

int main() {

	float A, B;
	printf("�� ���� �Ǽ��� space�� �����Ͽ� �Է��ϼ��� ==>");
	scanf("%f %f", &A, &B);

	float MAX = max(A, B);

	printResult(MAX);
}