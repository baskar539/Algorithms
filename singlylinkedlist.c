#include <stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
    struct Node* next;
}Node;
Node* createNode(int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
    if(!newNode)
    {
    	printf("Memory allocation failed\n");
    }
	newNode-> data = data;
    newNode->next = NULL;
    return newNode;    
}


void printlist(Node* node)
{
	while(node){
    	printf("%d ->",node->data);
        node = node->next;
    }
    printf("NULL\n");
 }

int main()
{
	Node* node1 = createNode(10);
    Node* node2 = createNode(54);
    Node* node3 = createNode(90);
    Node* node4 = createNode(44);
    
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    printlist(node1);
    
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    return 0;
    
}
