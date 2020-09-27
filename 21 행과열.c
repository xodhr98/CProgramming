#include <stdio.h>
#define MAX 5 //행과 열을 나타내는 상수
//행과 열이 반대로 되어있다.
int main() {
	int array[MAX][MAX] = { 0, };//배열에 값을 넣도록 만들어 주었다. 
	int i, j;
	int n = 0;//배열에 넣을 값,1씩 증가되는 숫자가 저장된다.

	for (i = 0; i < MAX; i++) {
		for (j = 0; j <= i; j++) {//j 인덱스가 i 인덱스보다 작거나 같을 때까지
			n++; //배열에 대입할 숫자를 증가시킨다.
			array[j][i - j] = n;
		}
	}//오른쪽 상단 끝까지 왔을 때 for문을 끝내고 다음 for문을 이용하여 배열을 채운다.
	for (i = 1; i < MAX; i++) { //array[1][4]부터 n=16을 넣어가면서 
		for (j = i; j < MAX; j++) {
			n++;//배열에 대입할 숫자를 증가시킨다.
			array[j][i - j + MAX - 1] = n;
		}
	}
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			printf("%3d", array[j][i]);
		}
		printf("\n");
	}
}	