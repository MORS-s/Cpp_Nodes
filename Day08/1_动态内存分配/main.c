#include<stdio.h>

typedef struct node_s
{
	int val;
	struct node_s* next;
} Node;

void add_to_list(Node** ptr_list, int val);

int main(void)
{
	Node* list = NULL;
	add_to_list(&list, 1);
	add_to_list(&list, 2);
	add_to_list(&list, 3);
	add_to_list(&list, 4);

	return 0;
}

void add_to_list(Node** ptr_list, int val)
{
	//ͷ�巨
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (NULL == newNode)
	{
		printf("malloc failed in add_in_list");
		exit(1);
	}
	//ͷ�巨
	newNode->val = val;
	newNode->next = *ptr_list;
	*ptr_list = newNode;
}