//����Ľӿ�(дһ���ӿ�ִ��һ�ε�Ԫ����)
#include <stdbool.h>

typedef struct node_s
{
	int val;
	struct node_s* next;
} Node;

typedef struct linkedlist_s
{
	Node* head;
	Node* tail;
	int size;
} LinkedList;

//���췽��������һ��������
LinkedList* create_list();

//�����������ͷ��ڴ�ռ�
void destory_list(LinkedList* list);

void add_before_head(LinkedList* list, int val);
void add_behind_tail(LinkedList* list, int val);
void add_node(LinkedList* list, int index, int val);

//ɾ����һ��ֵ��val��ȵĽ�㣬��������ڣ�����false
bool remove_node(LinkedList* list, int val);

//���ҵ�һ��ֵ��val��Ƚ�����������������ڣ�����-1
int indexOf(LinkedList* list, int val);