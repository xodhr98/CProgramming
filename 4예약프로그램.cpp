#include <stdio.h>
#define A_COURCE 30000
#define B_COURCE 20000
#define C_COURCE 10000

int main()
{
	char date[9];
	int num;
	int sum;

	printf("어서오세요. 슈먼 레스토랑 예약 프로그램입니다.\n\n");
	printf("예약 날짜 8자리를 입력해주세요. ==>");
	scanf("%s", date);
	printf("예약 날짜는 %c%c%c%c년 %c%c월 %c%c일 입니다.\n\n", date[0], date[1], date[2], date[3], date[4], date[5], date[6], date[7]);

	printf("예약 인원을 입력해주세요. ==>");
	scanf("%d", &num);
	if (num <= 5)
		printf("인원이 5명 이하이므로 Room C로 배정됩니다.\n\n");
	else {
		if (num > 5 && num <= 10)
			printf("인원이 6~10명 이므로 Room B로 배정됩니다.\n\n");
		else {
			if (num >= 11)
				printf("인원이 11명 이상이므로 Room A로 배정됩니다.\n\n");
		}
	}

	char dish;
	printf("요리를 선택해주세요. <A코스: 30000원, B코스: 20000원, C코스: 10000원> ==>");
	getchar();
	scanf("%c", &dish);

	switch (dish) {
	case 'A':
		sum = A_COURCE * num;
		printf("총 금액은 %d원 입니다.\n\n", sum);
		break;
	case 'B':
		sum = B_COURCE * num;
		printf("총 금액은 %d원 입니다.\n\n", sum);
		break;
	case 'C':
		sum = C_COURCE * num;
		printf("총 금액은 %d원 입니다.\n\n", sum);
		break;
	default: printf("총 금액은 0원입니다.\n\n");
	}
}