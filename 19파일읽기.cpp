#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
struct student {
	char name[50];
	int num;
	int sub1;
	int sub2;
	double avg;
};
int main() {
	char str[50];
	struct student s;

	FILE *fp = fopen("C:\\Users\\TAEOK\\Desktop\\student.txt", "r");
	
	fgets(str, 100, fp);
	strcpy(s.name, str);

	fscanf(fp, "%d %d %d", &s.num, &s.sub1, &s.sub2);

	s.avg = (s.sub1 + s.sub2) / 2;

	printf("�̸� : %s\n", s.name);
	printf("�й� : %d\n", s.num);
	printf("���� : %d\n", s.sub1);
	printf("���� : %d\n", s.sub2);
	printf("��� : %f", s.avg);
	fclose(fp);
	return 0;
	system("pause");
}