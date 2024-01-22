//链表的接口(写一个接口执行一次单元测试)
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

//构造方法：创建一个空链表
LinkedList* create_list();

//析构方法：释放内存空间
void destory_list(LinkedList* list);

void add_before_head(LinkedList* list, int val);
void add_behind_tail(LinkedList* list, int val);
void add_node(LinkedList* list, int index, int val);

//删除第一个值与val相等的结点，如果不存在，返回false
bool remove_node(LinkedList* list, int val);

//查找第一个值与val相等结点的索引，如果不存在，返回-1
int indexOf(LinkedList* list, int val);