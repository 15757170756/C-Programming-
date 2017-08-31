#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
	int data;
	struct Node *next;
}listNode, *linkList;

void push_ahead(linkList* headNode, int data);

int JosephusProblem(linkList* headNode, int n, int m);

int main()
{
	int n = 100, m = 67;
	listNode *headNode = NULL;
	for (int i = n; i > 0; --i)
		push_ahead(&headNode, i);

	int result = JosephusProblem(&headNode, n, m);

	printf("%d\n", result);
	return 0;
}

void push_ahead(linkList* headNode, int data)
{
	listNode *newNode = (listNode*)malloc(sizeof(listNode));
	listNode *endNode = *headNode;	
	newNode->data = data;
	newNode->next = *headNode;

	if (*headNode != NULL) {
		while (endNode->next != *headNode)
			endNode = endNode->next;
		endNode->next = newNode;
	}
	else
		newNode->next = newNode;

	*headNode = newNode;
}


int JosephusProblem(linkList *headNode, int n, int m)
{
	listNode *currentNode = *headNode;
	listNode *preNode = NULL;
	while (n > 1) {
		if (m == 1) {
			listNode* temp = currentNode->next;
			free(currentNode);
			currentNode = temp;
		}
		else {
			for (int i = m - 1; i > 0; --i) {
				preNode = currentNode;
				currentNode = currentNode->next;
			}
			//delete currentNode
			preNode->next = currentNode->next;
			listNode* temp = currentNode->next;
			free(currentNode);
			currentNode = temp;
		}
		n--;
	}

	return currentNode->data;
}
