#include <stdio.h> 

typedef struct listNode {
	int data; 
	struct NODE *next;
};

void createNode(struct NODE *target, int data) {
	struct  NODE *newNode = malloc(sizeof(struct NODE));
	newNode->next = target->next;
	newNode->data = data;
	target->next = newNode;
}
void deleteNode(struct NODE *target) {
	struct NODE *deleteNode = target->next;
	target->next = deleteNode->next;
	free(deleteNode);
}

int main(void) {
	int num, value;
	struct NODE *head = malloc(sizeof(struct NODE));
	head->next = NULL;

	do {
		printf("====================================\n");
		printf("현재 데이터 노드 =>\n\n");
		printf("원하는 번호를 선택하세요=> ");
		scanf("%d", &num);
		printf("추가할 데이터 값을 입력하세요 =>");
		scanf("%d", &value);

		switch (num) {
		case 1:
			createNode();
		case 2:
			

		}
	}
}

