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

	printf("�������. ���� ������� ���� ���α׷��Դϴ�.\n");
	printf("�丮�� �ο� ������ �����մϴ�.\n");
	do {
		printf("=============================\n");
		printf("1. A�ڽ�: 30000��\n");
		printf("2. B�ڽ�: 20000��\n");
		printf("3. C�ڽ�: 10000��\n");
		printf("4. ���� ����\n");
		printf("=============================\n\n");

		printf("�޴��� �������ּ���. ==> ");
		scanf("%d", &menu);
		if (menu < 4 && menu > 0) {
			printf("������ �丮�� ������ �ο��� �Է����ּ���. ==> ");
			scanf("%d", &num);
			total_num = total_num + num;
		}


		switch (menu)
		{
		case 1:
			A_num = A_num + num;
			if (total_num > MAX) {
				printf("�ִ� ���� �ο� 10���� �ʰ��ϰ� �Ǿ ������ ������ �� �����ϴ�.\n");
				add_num = total_num - MAX;
				printf("���� ������ �ο��� %d ���Դϴ�. �ٽ� �������ּ���.\n\n", add_num);
				total_num = total_num - num;
				add_num = 0;
				A_num = A_num - num;
			}
			break;
		case 2:
			B_num = B_num + num;
			if (total_num > MAX) {
				printf("�ִ� ���� �ο� 10���� �ʰ��ϰ� �Ǿ ������ ������ �� �����ϴ�.\n");
				add_num = total_num - MAX;
				printf("���� ������ �ο��� %d ���Դϴ�. �ٽ� �������ּ���.\n\n", add_num);
				total_num = total_num - num;
				add_num = 0;

				B_num = B_num - num;
			}
			break;
		case 3:
			C_num = C_num + num;
			if (total_num > MAX) {
				printf("�ִ� ���� �ο� 10���� �ʰ��ϰ� �Ǿ ������ ������ �� �����ϴ�.\n");
				add_num = total_num - MAX;
				printf("���� ������ �ο��� %d ���Դϴ�. �ٽ� �������ּ���.\n\n", add_num);
				total_num = total_num - num;
				add_num = 0;
				C_num = C_num - num;
			}
			break;
		case 4:
			printf("�ֹ��� ����Ǿ����ϴ�.");
			count = A_num * 30000;
			count = count + B_num * 20000;
			count = count + C_num * 10000;
			printf("A�ڽ� : %d ��, B�ڽ� : %d ��, C�ڽ� : %d ��\n", A_num, B_num, C_num);
			printf("�� �ݾ��� %d �� �Դϴ�.\n", count);
			break;
		default:
			printf("�߸� �����̽��ϴ�. �ٽ� �������ּ���.\n\n");
			break;
		}
	} while (menu != 4);

}