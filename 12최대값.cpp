#include <stdio.h>

int main() {
	int *arr[4];
	int *max = 0;
	printf("4���� ���ڸ� ������ �̿��Ͽ� �Է��ϼ���.\n");
	scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);

	for (int i = 0; i < 4; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("�ִ밪�� %d �Դϴ�.\n\n", max);

}