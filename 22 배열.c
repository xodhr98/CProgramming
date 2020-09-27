#include <stdio.h>

int main()
{
	int  array[10][10] = { 0, };
	int  i = 0;    // 행
	int  j = 0;    // 열
	int  k = 1;    // 증감 (1 or -1)
	int  n = 1;    // 프린트되는 숫자 ( 1 ~ num )
	int  m = 1;    // 절반 넘었는지 체크
	int  num=5;    // 입력받는 행렬수

	for (; n <= (num*num); ++m, k = k * (-1)) { //프린트되는 숫자가 25가 될 때까지, 
												//m을 증가하고, k는 한번씩 증가 감소를 반복해준다,
		for (; i >= 0 && j >= 0 && i < num && j < num; i = i + k, j = j - k, ++n){ //행과 열은 k에 따라 달라진다.
			array[i][j] = n; //배열안에 숫자를 넣어준다.
		}
		if (k == 1){ //k로 왼쪽에서 오른쪽으로 올라갈지, 왼쪽에서 오른쪽으로 내려갈지를 결정한다.
			//모든 좌표를 그대로 이동하였을 때, 왼쪽 끝으로 오면 다른 연산을 해준다.
			if (m >= num){
				i = i - 1;
				j = j + 2;
			}
			else{
				j = j + 1;
			}
		}
		else{ //k가 음수일 때는 왼쪽에서 오른쪽으로 올라가는 형태이다
			if (m >= num){
				i = i + 2;
				j = j - 1;
			}
			else{
				i = i + 1;
			}
		}
	}

	for (i = 0; num > i; ++i){ //숫자를 넣은 배열을 출력해준다.
		for (j = 0; num > j; ++j){
			printf(" %3d", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}