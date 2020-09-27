#include <stdio.h>
#define WORD "입력하세요 ==>"
int main(void)
{
	char name[10];
	char blood[10];
	int num;
	float left, right;

	printf("이름을 " WORD);
	scanf("%s", &name);
	printf("학번을 " WORD);
	scanf("%d", &num);
	printf("왼쪽 시력을 " WORD);
	scanf("%f", &left);
	printf("오른쪽 시력을 " WORD);
	scanf("%f", &right);
	printf("혈액형을 " WORD);
	scanf("%s", &blood);

	printf("======= 프로필 ======\n");
	printf("이름: %s\n", name);
	printf("학번: %d\n", num);
	printf("왼쪽 시력: %0.1f\n", left);
	printf("오른쪽 시력: %0.1f\n", right);
	printf("혈액형: %s\n", blood);
	printf("=====================\n");

	return 0;
}