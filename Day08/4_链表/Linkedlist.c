//链表的实现
#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

//创建空链表
LinkedList* create_list() {
	return (LinkedList*)calloc(1, sizeof(LinkedList));
}

//头插法
void add_before_head(LinkedList* list, int val) {
	//创建新结点
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (NULL == newNode) {
		printf("Error: malloc falied in add_before_head.\n");
		exit(1);
	}
	//初始化结点
	newNode->val = val;
	newNode->next = list->head;
	list->head = newNode;
	//判断链表是否为空
	if (NULL == list->tail) {
		list->tail = newNode;
	}
	//更新size
	list->size++;
}

//尾插法
void add_behind_tail(LinkedList* list, int val) {
	//创建新结点
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (NULL == newNode) {
		printf("Error: malloc falied in add_behind_tail.\n");
		exit(1);
	}
	//初始化结点
	newNode->val = val;
	newNode->next = NULL;
	//判断链表是否为空
	if (0 == list->size) {
		list->head = newNode;
		list->tail = newNode;
	}
	else {
		//链接新结点
		list->tail->next = newNode;
		//更新list->tail
		list->tail = newNode;
	}
	list->size++;
}

//指定索引位置插入节点
void add_node(LinkedList* list, int index, int val) {
	if (0 > index || list->size < index) {
		printf("Error: Illegal index.\n");
		exit(1);
	}
	//创建新结点
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (NULL == newNode) {
		printf("Error: malloc falied in add_add_node.\n");
		exit(1);
	}
	//初始化结点
	newNode->val = val;
	if (0 == index) {
		//头插法的逻辑
		newNode->next = list->head;
		list->head = newNode;
	}
	else {
		//找到索引为index-1的结点
		Node* p = list->head;
		for (int i = 0; i < index - 1; i++){
			p = p->next;
		}
		newNode->next = p->next;
		p->next = newNode;
	}
	//更新尾节点
	if (index == list->size) {
		list->tail = newNode;
	}
	list->size++;
}

//删除第一个值与val相等的结点，如果不存在，返回false
bool remove_node(LinkedList* list, int val) {
	Node* prev = NULL;
	Node* curr = list->head;
	//寻找前驱结点
	while (curr != NULL && curr->val != val) {	//短路原则
		prev = curr;
		curr = curr->next;
	}
	//不存在值等于val的结点
	if (NULL == curr) return false;
	//删除第一个元素
	if (NULL == prev) {
		if (1 == list->size) {
			list->head = list->tail = NULL;
		}
		else {
			list->head = curr->next;
		}
		free(curr);
	}
	else{
		prev->next = curr->next;
		if (prev->next == NULL){
			list->tail = prev;
		}
		free(curr);
	}
	list->size--;
	return true;
}

//查找第一个值与val相等结点的索引，如果不存在，返回-1
int indexOf(LinkedList* list, int val) {
	Node* curr = list->head;
	for (int i = 0; i < list->size; i++, curr = curr->next) {
		if (curr->val == val) {
			return i;
		}
	}
	//不存在
	return -1;
}

//析构方法：释放内存空间
void destory_list(LinkedList* list) {
	//释放结点空间
	Node* curr = list->head;
	while (curr != NULL) {
		//保存curr的后继结点
		Node* next = curr->next;
		free(curr);
		curr = curr->next;
	}
	//释放LinkedList结构体
	free(list);
}
