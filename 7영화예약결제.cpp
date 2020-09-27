#include <stdio.h>
#define M1 "1. 별이 빛나는 밤\n"
#define M2 "2. 건축학 개론\n"
#define M3 "3. 타이타닉(3D)\n"
#define M4 "4. 코난-암흑의시대\n"
#define MAX_TICKET 10

int main() {
	int movieNum, count;
	int ticket = 0, M1_ticket = 0, M2_ticket = 0, M3_ticket = 0, M4_ticket = 0, total_ticket = 0;

	printf("슈먼 시네마에 오신것을 환영합니다.\n\n");
	do {
		printf("=============================\n");
		printf(M1);
		printf(M2);
		printf(M3);
		printf(M4);
		printf("=============================\n");
		printf("예매할 영화 번호를 입력하세요.<예매 종료 : 0번> ==>");
		scanf("%d", &movieNum);
		if (movieNum < 5 && movieNum > 0) {
			printf("예매할 영화 매수를 입력하세요.==>");
			scanf("%d", &ticket);
			total_ticket = total_ticket + ticket;
		}

		switch (movieNum)
		{
		case 0:
			printf("예매를 종료합니다,\n\n");
			count = (M1_ticket + M2_ticket + M3_ticket + M4_ticket) * 9000;
			printf(M1 " : %d장\n", M1_ticket);
			printf(M2 " : %d장\n", M2_ticket);
			printf(M3 " : %d장\n", M3_ticket);
			printf(M4 " : %d장\n\n", M4_ticket);
			printf("총 결제 금액은 %d 원 입니다.\n\n", count);
			break;
		case 1:
			M1_ticket = M1_ticket + ticket;
			if (total_ticket > MAX_TICKET) {
				printf("최대 예매 수량 10장을 초과하게 됩니다.\n");
				printf("현재 가능한 예매 수량은 %d장입니다. 다시 진행해주세요.\n\n", MAX_TICKET - (total_ticket - ticket));
				total_ticket = total_ticket - ticket;
				M1_ticket = M1_ticket - ticket;
			}
			break;
		case 2:
			M2_ticket = M2_ticket + ticket;
			if (total_ticket > MAX_TICKET) {
				printf("최대 예약 수량 10장을 초과하게 됩니다.\n");
				printf("현재 가능한 예매 수량은 %d장입니다. 다시 진행해주세요.\n\n", MAX_TICKET - (total_ticket - ticket));
				total_ticket = total_ticket - ticket;
				M2_ticket = M2_ticket - ticket;
			}
			break;
		case 3:
			M3_ticket = M3_ticket + ticket;
			if (total_ticket > MAX_TICKET) {
				printf("최대 예약 수량 10장을 초과하게 됩니다.\n");
				printf("현재 가능한 예매 수량은 %d장입니다. 다시 진행해주세요.\n\n", MAX_TICKET - (total_ticket - ticket));
				total_ticket = total_ticket - ticket;
				M3_ticket = M3_ticket - ticket;
			}
			break;
		case 4:
			M4_ticket = M4_ticket + ticket;
			if (total_ticket > MAX_TICKET) {
				printf("최대 예약 수량 10장을 초과하게 됩니다.\n");
				printf("현재 가능한 예매 수량은 %d장입니다. 다시 진행해주세요.\n\n", MAX_TICKET - (total_ticket - ticket));
				total_ticket = total_ticket - ticket;
				M4_ticket = M4_ticket - ticket;
			}
			break;
		default:
			printf("잘못 누르셨습니다. 다시 선택해주세요.\n\n");
			break;
		}
	} while (movieNum != 0);

}