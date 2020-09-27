#include <stdio.h>
#define MAX 10
int main() {

	int menu;
	int num, add_num;
	int count;
	int A_num = 0;
	int B_num = 0;
	int C_num = 0;
	int total_num = 0;

	printf("어서오세요. 슈먼 레스토랑 예약 프로그램입니다.\n");
	printf("요리별 인원 선택이 가능합니다.\n");
	do {
		printf("=============================\n");
		printf("1. A코스: 30000원\n");
		printf("2. B코스: 20000원\n");
		printf("3. C코스: 10000원\n");
		printf("4. 예약 종료\n");
		printf("=============================\n\n");

		printf("메뉴를 선택해주세요. ==> ");
		scanf("%d", &menu);
		if (menu < 4 && menu > 0) {
			printf("선택한 요리를 예약할 인원을 입력해주세요. ==> ");
			scanf("%d", &num);
			total_num = total_num + num;
		}


		switch (menu)
		{
		case 1:
			A_num = A_num + num;
			if (total_num > MAX) {
				printf("최대 예약 인원 10명을 초과하게 되어서 예약을 진행할 수 없습니다.\n");
				add_num = total_num - MAX;
				printf("예약 가능한 인원은 %d 명입니다. 다시 선택해주세요.\n\n", add_num);
				total_num = total_num - num;
				add_num = 0;
				A_num = A_num - num;
			}
			break;
		case 2:
			B_num = B_num + num;
			if (total_num > MAX) {
				printf("최대 예약 인원 10명을 초과하게 되어서 예약을 진행할 수 없습니다.\n");
				add_num = total_num - MAX;
				printf("예약 가능한 인원은 %d 명입니다. 다시 선택해주세요.\n\n", add_num);
				total_num = total_num - num;
				add_num = 0;

				B_num = B_num - num;
			}
			break;
		case 3:
			C_num = C_num + num;
			if (total_num > MAX) {
				printf("최대 예약 인원 10명을 초과하게 되어서 예약을 진행할 수 없습니다.\n");
				add_num = total_num - MAX;
				printf("예약 가능한 인원은 %d 명입니다. 다시 선택해주세요.\n\n", add_num);
				total_num = total_num - num;
				add_num = 0;
				C_num = C_num - num;
			}
			break;
		case 4:
			printf("주문이 종료되었습니다.");
			count = A_num * 30000;
			count = count + B_num * 20000;
			count = count + C_num * 10000;
			printf("A코스 : %d 명, B코스 : %d 명, C코스 : %d 명\n", A_num, B_num, C_num);
			printf("총 금액은 %d 원 입니다.\n", count);
			break;
		default:
			printf("잘못 누르셨습니다. 다시 선택해주세요.\n\n");
			break;
		}
	} while (menu != 4);

}