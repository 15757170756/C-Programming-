#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	char charData;
	struct Node* next;
} listNode, *LinkList;

void creatList(LinkList* plist);
void printList(LinkList* plist);
void destroyList(LinkList* plist);

int main(int argc, char* argv[])
{
	LinkList linkList;
	creatList(&linkList);
	printList(&linkList);
	destroyList(&linkList);

	return 0;
}

void creatList(LinkList* plist)
{
	listNode* currentNode, *preNode;
	*plist = NULL;
	currentNode = (listNode*)malloc(sizeof(listNode));
	if (currentNode == NULL) {
		printf("error:malloc failed!\n");
		return;
	}
	printf("请输入一行字符，并以回车键结束。\n");
	scanf("%c", &currentNode->charData);
	while (currentNode->charData != '\n') {
		if (*plist == NULL)
			*plist = currentNode;
		else
			preNode->next = currentNode;
		currentNode->next = NULL;
		preNode = currentNode;
		currentNode = (listNode*)malloc(sizeof(listNode));
		if (currentNode == NULL) {
			printf("error:malloc failed!\n");
			return;
		}
		scanf("%c", &currentNode->charData);
	}
	preNode->next = NULL;
	free(currentNode);
	currentNode = NULL;
}

void printList(LinkList* plist)
{
	listNode* currentNode;
	if (*plist == NULL) {
		printList("the list is NULL.\n");
		return;
	}
	else {
		currentNode = *plist;
		do {
			printf("%c", currentNode->charData);
			currentNode = currentNode->next;
		} while (currentNode != NULL);
	}
	printf("\n");
}
void destroyList(LinkList* plist)
{
	LinkList temp;
	while (*plist) {
		temp = (*plist)->next;
		free(*plist);
		*plist = temp;
	}
	printf("此链表已被销毁\n");
}


