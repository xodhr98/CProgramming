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
		printf("���� ������ ��� =>\n\n");
		printf("���ϴ� ��ȣ�� �����ϼ���=> ");
		scanf("%d", &num);
		printf("�߰��� ������ ���� �Է��ϼ��� =>");
		scanf("%d", &value);

		switch (num) {
		case 1:
			createNode();
		case 2:
			

		}
	}
}

