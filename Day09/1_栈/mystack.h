#include <stdbool.h>

//ջ�Ľӿ�

typedef struct node_s{
	int val;
	struct node_s* next;
} Node;

//����ָ�����
//typedef struct stack_s {
//	Node* top;
//} Stack;

void push(Node** top, int val);
int pop(Node** top);
bool isEmpty(Node* top);
//�鿴ջ��Ԫ�ص�ֵ
int peek(Node* top);