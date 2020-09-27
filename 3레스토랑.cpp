#include <stdio.h>
#define WORD "<현재 주문 총 금액: %d>\n\n"

int main(void)
{
	int menu, drink, price;

	printf("\"슈먼 레스토랑\"에 오신것을 환영합니다!!\n\n");

	printf("======= Main Menu ========\n");
	printf("1. 봉골레 파스타 : 16000원\n");
	printf("2. 빠네 파스타 : 18000원\n");
	printf("3. 포테이토 피자 : 20000원\n");
	printf("4. 고르곤졸라 피자: 22000원\n");
	printf("==========================\n\n");

	printf("메인 메뉴를 선택하세요 : ");
	scanf("%d", &menu);


	switch (menu) {
	case 1: // 메뉴선택
		price = 16000;
		printf(WORD, price);

		printf("======= Drink ========\n");
		printf("1. 소다 : 3000원\n");
		printf("2. 에이드 : 4000원\n");
		printf("3. 생과일 주스 : 6000원\n");
		printf("======================\n");

		printf("음료를 선택하세요 : ");
		scanf("%d", &drink);
		switch (drink) {
		case 1:
			price += 3000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		case 2:
			price += 4000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		case 3:
			price += 6000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		default://그외
			printf("잘못 누르셨습니다." WORD, price);
			break;
		}
		break;
	case 2: // 메뉴선택
		price = 18000;
		printf(WORD, price);

		printf("======= Drink ========\n");
		printf("1. 소다 : 3000원\n");
		printf("2. 에이드 : 4000원\n");
		printf("3. 생과일 주스 : 6000원\n");
		printf("======================\n");

		printf("음료를 선택하세요 : ");
		scanf("%d", &drink);
		switch (drink) {
		case 1:
			price += 3000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		case 2:
			price += 4000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		case 3:
			price += 6000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		default://그외
			printf("잘못 누르셨습니다." WORD, price);
			break;
		}
		break;
	case 3: // 메뉴선택
		price = 20000;
		printf(WORD, price);

		printf("======= Drink ========\n");
		printf("1. 소다 : 3000원\n");
		printf("2. 에이드 : 4000원\n");
		printf("3. 생과일 주스 : 6000원\n");
		printf("======================\n");

		printf("음료를 선택하세요 : ");
		scanf("%d", &drink);
		switch (drink) {
		case 1:
			price += 3000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		case 2:
			price += 4000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		case 3:
			price += 6000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		default://그외
			printf("잘못 누르셨습니다." WORD, price);
			break;
		}
		break;
	case 4: // 메뉴선택
		price = 22000;
		printf(WORD, price);

		printf("======= Drink ========\n");
		printf("1. 소다 : 3000원\n");
		printf("2. 에이드 : 4000원\n");
		printf("3. 생과일 주스 : 6000원\n");
		printf("======================\n");

		printf("음료를 선택하세요 : ");
		scanf("%d", &drink);
		switch (drink) {
		case 1:
			price += 3000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		case 2:
			price += 4000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		case 3:
			price += 6000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		default://그외
			printf("잘못 누르셨습니다." WORD, price);
			break;
		}
		break;
	default://그외
		int price = 0;
		printf("잘못 누르셨습니다." WORD, price);
		printf("======= Drink ========\n");
		printf("1. 소다 : 3000원\n");
		printf("2. 에이드 : 4000원\n");
		printf("3. 생과일 주스 : 6000원\n");
		printf("======================\n");

		printf("음료를 선택하세요 : ");
		scanf("%d", &drink);
		switch (drink) {
		case 1:
			price += 3000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		case 2:
			price += 4000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		case 3:
			price += 6000;
			printf(WORD, price);
			printf("주문이 완료되었습니다.\n");
			break;
		default://그외
			printf("잘못 누르셨습니다." WORD, price);
			break;
		}
	}
}