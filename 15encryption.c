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
	printf("3개의 평문을 영어 소문자로 입력해주세요.<100글자 이내>\n");
	for (int i = 0; i < 3; i++) {
		scanf("%s", imsi);
		plaintext[i] = (char *)malloc(100 * sizeof(char));
		strcpy(plaintext[i], imsi);
	}
	printf("문자열 암호화에 사용할 key를 입력하세요. :");
	scanf("%d", &key);
	printf("\n입력된 문자열을 암호문으로 변경합니다.\n");
	for (int i = 0; i < 3; i++) {
		encrtpt(key, plaintext[i]);
	}

}