#include <stdio.h>

typedef struct department {
	char name[30];
	int num;
	int subject;
};

int main() {
	struct department swu;
	struct department *pswu = &swu;

	printf("�Էºμ� <�а�> : �а� �̸��� �Է��ϼ���.==> ");
	scanf("%s", &(*pswu).name);
	printf("�Էºμ� <�ѹ���> : �л� ���� �Է��ϼ���.==> ");
	scanf("%d", &swu.num);
	printf("�Էºμ� <������> : ���� ���� �Է��ϼ���.==> ");
	scanf("%d", &swu.subject);

	printf("\n\n\n=========================\n");
	printf("�а��� : %s\n", (*pswu).name);
	printf("�л��� : %d\n", swu.num);
	printf("����� : %d\n", swu.subject);

}