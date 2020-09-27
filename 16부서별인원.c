#include <stdio.h>

typedef struct department {
	char name[30];
	int num;
	int subject;
};

int main() {
	struct department swu;
	struct department *pswu = &swu;

	printf("입력부서 <학과> : 학과 이름을 입력하세요.==> ");
	scanf("%s", &(*pswu).name);
	printf("입력부서 <총무과> : 학생 수를 입력하세요.==> ");
	scanf("%d", &swu.num);
	printf("입력부서 <교무과> : 과목 수를 입력하세요.==> ");
	scanf("%d", &swu.subject);

	printf("\n\n\n=========================\n");
	printf("학과명 : %s\n", (*pswu).name);
	printf("학생수 : %d\n", swu.num);
	printf("과목수 : %d\n", swu.subject);

}