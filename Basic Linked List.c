#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void printList(struct Node* n) 
{ 
    while (n != NULL) { 
        printf(" %d ", n->data); 
        n = n->next; 
    } 
} 
int main()
{
	struct Node* head=NULL;
	struct Node* second=NULL;
	struct Node* third=NULL;
	struct Node* current=NULL;
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	current=(struct Node*)malloc(sizeof(struct Node));
	head->data=1;
	head->next=current;
	current->data=2;
	current->next=NULL;
	current=malloc(sizeof(struct Node));
	current->data=4;
	current->next=NULL;
	head->next->next=current;
	// current=malloc(sizeof(struct Node));
	// head->next->next=current;
	printList(head); 
	return 0;


}