#include <stdio.h> 

typedef struct listNode {
	char val[30];
	struct listNode *next;
}node_t;

typedef struct {
	node_t* head;
}linkedList_h;
linkedList_h createLinkedList_h(void) {
	linkedList_h *L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;
	return L;
}
void printList(linkedList_h *L) {
	node_t *p;
	printf("L=(");
	p = L->head;
	while (p != NULL) {
		printf("%s", p->val);
		p = p->link;

	}
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

