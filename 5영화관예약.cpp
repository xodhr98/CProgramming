#include <stdio.h>
#define M1 "1. 별이 빛나는 밤\n"
#define M2 "2. 건축학 개론\n"
#define M3 "3. 타이타닉(3D)\n"
#define M4 "4. 코난-암흑의시대\n"

int main() {
	char name[10];
	int age;
	int num;

	printf("슈먼 시네마에 오신것을 환영합니다.\n\n");
	printf("예약자의 이름 및 나이를 공백문자로 구분하여 입력하세요. ==>");
	scanf("%s %d", name, &age);

	printf("%s 님이 예매 가능한 영화입니다.\n\n", name);

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
	printf("원하는 영화 번호를 입력하세요. ==>");
	scanf("%d", &num);

	switch (num) {
	case 1:
		if (age > 1 && age <= 99)
			printf("영화 예매가 진행됩니다.\n");
		else
			printf("잘못 누르셨습니다.\n");
		break;
	case 2:
		if (age >= 12)
			printf("영화 예매가 진행됩니다.\n");
		else
			printf("잘못 누르셨습니다.\n");
		break;
	case 3:
		if (age >= 15)
			printf("영화 예매가 진행됩니다.\n");
		else
			printf("잘못 누르셨습니다.\n");
		break;
	case 4:
		if (age >= 18)
			printf("영화 예매가 진행됩니다.\n");
		else
			printf("잘못 누르셨습니다.\n");
		break;

	default:
		printf("잘못 누르셨습니다.\n");
		break;
	}

}