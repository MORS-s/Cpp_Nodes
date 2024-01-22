//�����ʵ��
#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

//����������
LinkedList* create_list() {
	return (LinkedList*)calloc(1, sizeof(LinkedList));
}

//ͷ�巨
void add_before_head(LinkedList* list, int val) {
	//�����½��
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (NULL == newNode) {
		printf("Error: malloc falied in add_before_head.\n");
		exit(1);
	}
	//��ʼ�����
	newNode->val = val;
	newNode->next = list->head;
	list->head = newNode;
	//�ж������Ƿ�Ϊ��
	if (NULL == list->tail) {
		list->tail = newNode;
	}
	//����size
	list->size++;
}

//β�巨
void add_behind_tail(LinkedList* list, int val) {
	//�����½��
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (NULL == newNode) {
		printf("Error: malloc falied in add_behind_tail.\n");
		exit(1);
	}
	//��ʼ�����
	newNode->val = val;
	newNode->next = NULL;
	//�ж������Ƿ�Ϊ��
	if (0 == list->size) {
		list->head = newNode;
		list->tail = newNode;
	}
	else {
		//�����½��
		list->tail->next = newNode;
		//����list->tail
		list->tail = newNode;
	}
	list->size++;
}

//ָ������λ�ò���ڵ�
void add_node(LinkedList* list, int index, int val) {
	if (0 > index || list->size < index) {
		printf("Error: Illegal index.\n");
		exit(1);
	}
	//�����½��
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (NULL == newNode) {
		printf("Error: malloc falied in add_add_node.\n");
		exit(1);
	}
	//��ʼ�����
	newNode->val = val;
	if (0 == index) {
		//ͷ�巨���߼�
		newNode->next = list->head;
		list->head = newNode;
	}
	else {
		//�ҵ�����Ϊindex-1�Ľ��
		Node* p = list->head;
		for (int i = 0; i < index - 1; i++){
			p = p->next;
		}
		newNode->next = p->next;
		p->next = newNode;
	}
	//����β�ڵ�
	if (index == list->size) {
		list->tail = newNode;
	}
	list->size++;
}

//ɾ����һ��ֵ��val��ȵĽ�㣬��������ڣ�����false
bool remove_node(LinkedList* list, int val) {
	Node* prev = NULL;
	Node* curr = list->head;
	//Ѱ��ǰ�����
	while (curr != NULL && curr->val != val) {	//��·ԭ��
		prev = curr;
		curr = curr->next;
	}
	//������ֵ����val�Ľ��
	if (NULL == curr) return false;
	//ɾ����һ��Ԫ��
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

//���ҵ�һ��ֵ��val��Ƚ�����������������ڣ�����-1
int indexOf(LinkedList* list, int val) {
	Node* curr = list->head;
	for (int i = 0; i < list->size; i++, curr = curr->next) {
		if (curr->val == val) {
			return i;
		}
	}
	//������
	return -1;
}

//�����������ͷ��ڴ�ռ�
void destory_list(LinkedList* list) {
	//�ͷŽ��ռ�
	Node* curr = list->head;
	while (curr != NULL) {
		//����curr�ĺ�̽��
		Node* next = curr->next;
		free(curr);
		curr = curr->next;
	}
	//�ͷ�LinkedList�ṹ��
	free(list);
}
