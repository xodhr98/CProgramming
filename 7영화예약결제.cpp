#include <stdio.h>
#define M1 "1. ���� ������ ��\n"
#define M2 "2. ������ ����\n"
#define M3 "3. Ÿ��Ÿ��(3D)\n"
#define M4 "4. �ڳ�-�����ǽô�\n"
#define MAX_TICKET 10

int main() {
	int movieNum, count;
	int ticket = 0, M1_ticket = 0, M2_ticket = 0, M3_ticket = 0, M4_ticket = 0, total_ticket = 0;

	printf("���� �ó׸��� ���Ű��� ȯ���մϴ�.\n\n");
	do {
		printf("=============================\n");
		printf(M1);
		printf(M2);
		printf(M3);
		printf(M4);
		printf("=============================\n");
		printf("������ ��ȭ ��ȣ�� �Է��ϼ���.<���� ���� : 0��> ==>");
		scanf("%d", &movieNum);
		if (movieNum < 5 && movieNum > 0) {
			printf("������ ��ȭ �ż��� �Է��ϼ���.==>");
			scanf("%d", &ticket);
			total_ticket = total_ticket + ticket;
		}

		switch (movieNum)
		{
		case 0:
			printf("���Ÿ� �����մϴ�,\n\n");
			count = (M1_ticket + M2_ticket + M3_ticket + M4_ticket) * 9000;
			printf(M1 " : %d��\n", M1_ticket);
			printf(M2 " : %d��\n", M2_ticket);
			printf(M3 " : %d��\n", M3_ticket);
			printf(M4 " : %d��\n\n", M4_ticket);
			printf("�� ���� �ݾ��� %d �� �Դϴ�.\n\n", count);
			break;
		case 1:
			M1_ticket = M1_ticket + ticket;
			if (total_ticket > MAX_TICKET) {
				printf("�ִ� ���� ���� 10���� �ʰ��ϰ� �˴ϴ�.\n");
				printf("���� ������ ���� ������ %d���Դϴ�. �ٽ� �������ּ���.\n\n", MAX_TICKET - (total_ticket - ticket));
				total_ticket = total_ticket - ticket;
				M1_ticket = M1_ticket - ticket;
			}
			break;
		case 2:
			M2_ticket = M2_ticket + ticket;
			if (total_ticket > MAX_TICKET) {
				printf("�ִ� ���� ���� 10���� �ʰ��ϰ� �˴ϴ�.\n");
				printf("���� ������ ���� ������ %d���Դϴ�. �ٽ� �������ּ���.\n\n", MAX_TICKET - (total_ticket - ticket));
				total_ticket = total_ticket - ticket;
				M2_ticket = M2_ticket - ticket;
			}
			break;
		case 3:
			M3_ticket = M3_ticket + ticket;
			if (total_ticket > MAX_TICKET) {
				printf("�ִ� ���� ���� 10���� �ʰ��ϰ� �˴ϴ�.\n");
				printf("���� ������ ���� ������ %d���Դϴ�. �ٽ� �������ּ���.\n\n", MAX_TICKET - (total_ticket - ticket));
				total_ticket = total_ticket - ticket;
				M3_ticket = M3_ticket - ticket;
			}
			break;
		case 4:
			M4_ticket = M4_ticket + ticket;
			if (total_ticket > MAX_TICKET) {
				printf("�ִ� ���� ���� 10���� �ʰ��ϰ� �˴ϴ�.\n");
				printf("���� ������ ���� ������ %d���Դϴ�. �ٽ� �������ּ���.\n\n", MAX_TICKET - (total_ticket - ticket));
				total_ticket = total_ticket - ticket;
				M4_ticket = M4_ticket - ticket;
			}
			break;
		default:
			printf("�߸� �����̽��ϴ�. �ٽ� �������ּ���.\n\n");
			break;
		}
	} while (movieNum != 0);

}