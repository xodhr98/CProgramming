#include <stdio.h>
int main() {
	int array[5][5] = { 0, };//�迭�� ���� �ֵ��� ����� �־���. 
	int i, j;
	int n = 0;//�迭�� ���� ��,1�� �����Ǵ� ���ڰ� ����ȴ�.

	for (int turn = 0; turn< 9; turn++) {  //0~8 : 9ȸ�� : �밢��
		for (j = 0; j <5; j++) { //0~4 : 5ȸ�� : ��

			i = turn - j; //��               
			if (i >= 0 && i < 5) { //0���� ũ�ų� ���� 5���� ���� ��쿡
				n = n + 1;
				array[i][j] = n;
			}
		}
	}

	for (i = 0; i < 5; i++) {//�ݺ��� ���� ������ش�.
		for (j = 0; j < 5; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
}