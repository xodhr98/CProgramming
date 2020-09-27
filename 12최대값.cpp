#include <stdio.h>

int main() {
	int *arr[4];
	int *max = 0;
	printf("4개의 숫자를 공백을 이용하여 입력하세요.\n");
	scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);

	for (int i = 0; i < 4; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("최대값은 %d 입니다.\n\n", max);

}