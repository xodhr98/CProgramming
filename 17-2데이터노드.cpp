#include <stdio.h>
#include <stdlib.h>
struct  node *head;
struct node {
	int data;
	struct  node *link;
};

struct node *insert(struct node *pre, int data1) {
	struct node *i;

	i = (struct node *)malloc(sizeof(struct node));
	i->data = data1;
	if (head == NULL) {
		head = i;
		i->link = NULL;
	}
	else {
		i->link = pre->link;
		pre->link = i;
	}
	return(i);
}
struct node betweenlist() {
	int betw, betwNum;
	struct node *bt;
	bt = head;

	printf("���� ������ �� � �� �ڿ� �����ϱ⸦ ���մϱ� ? ==> ");
	scanf("%d", &betw);
	printf("������ ������ ���� �Է��ϼ���==>");
	scanf("%d", &betwNum);
	printf("\n");

	do {
		if (bt->data == betw) {
			insert(bt, betwNum);
			break;
		}
		bt = bt->link;
	} while (1);

}
void listDelete() {
	struct node *f, *m, *r;
	int i;

	printf("���ϴ� ��ȣ�� �����ϼ���.==>");
	scanf("%d", &i);

	f = m->link;
	do {
		if (f->data == i) {
			m = f->link;
			head = m;
			free(f);
			break;
		}
		else if (m->data == i) {
			r = m->link;
			f->link = m->link;
			free(m);
			break;
		}
		f = f->link;
		m = m->link;
	} while (1);
}

struct node printList() {
	struct node *pt, *pt1;
	printf("%d", head->data);

	pt = head;
	while (pt->link != NULL) {
		pt1 = pt->link;
		pt = pt1;
		printf("%d", pt->data);
	}
	printf("\n\n");
}

int main() {
	int num=0;
	int inputNum;
	struct node *pre;
	head = pre = NULL;
	do {
		printf("=================================\n");
		printf("���� ������ ��� ==>");
		printList();
		printf("1: ��� �߰�   2: ��� ����   3:��� ����   4: ��� ����   5: ����");
		printf("���ϴ� ��ȣ�� �����ϼ���.==>");

		if (num == 1) {
			printf("�߰��� ������ ���� �Է��ϼ���==> ");
			scanf("%d", &inputNum);
			pre = insert(pre, inputNum);
			printf("\n");
		}
		else if (num == 2) {
			if (head == NULL) {
				printf("X");
			}
			else {
				betweenlist();
			}
		}
		else if (num == 3) {
			if (head == NULL) {
				printf("X");
			}
			else
				listDelete();
		}
		else if (num == 4)
			if (head == NULL)
				printf("X");
			else
				listDelete();
	} while (num != 5);
}

