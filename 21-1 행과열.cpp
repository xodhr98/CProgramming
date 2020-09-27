#include <stdio.h>
int main() {
	int array[5][5] = { 0, };//배열에 값을 넣도록 만들어 주었다. 
	int i, j;
	int n = 0;//배열에 넣을 값,1씩 증가되는 숫자가 저장된다.

	for (int turn = 0; turn< 9; turn++) {  //0~8 : 9회전 : 대각선
		for (j = 0; j <5; j++) { //0~4 : 5회전 : 열

			i = turn - j; //행               
			if (i >= 0 && i < 5) { //0보다 크거나 같고 5보다 작은 경우에
				n = n + 1;
				array[i][j] = n;
			}
		}
	}

	for (i = 0; i < 5; i++) {//반복을 통해 출력해준다.
		for (j = 0; j < 5; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
}