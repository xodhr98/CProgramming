#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void encrtpt(int key, char *ciphertext) {
	int len = 0;
	len = strlen(ciphertext);
	for (int i = 0; i < len; i++) {
		if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z') {
			ciphertext[i] -= 'a';
			if (ciphertext[i] + key < 0) {
				ciphertext[i] += 26;
			}
			ciphertext[i] = (ciphertext[i] + key) % 26;
			ciphertext[i] += 'a';
		}
	}
	printf("%s\n", ciphertext);
}
int main() {
	int key;
	char imsi[100];
	char *plaintext[3];
	printf("3���� ���� ���� �ҹ��ڷ� �Է����ּ���.<100���� �̳�>\n");
	for (int i = 0; i < 3; i++) {
		scanf("%s", imsi);
		plaintext[i] = (char *)malloc(100 * sizeof(char));
		strcpy(plaintext[i], imsi);
	}
	printf("���ڿ� ��ȣȭ�� ����� key�� �Է��ϼ���. :");
	scanf("%d", &key);
	printf("\n�Էµ� ���ڿ��� ��ȣ������ �����մϴ�.\n");
	for (int i = 0; i < 3; i++) {
		encrtpt(key, plaintext[i]);
	}

}