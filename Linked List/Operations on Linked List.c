#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head=NULL;
int cnt=0;
void printList(struct Node* n) 
{ 
    while (n != NULL) {
        printf(" %d ", n->data); 
        // printf("%d",n->next);
        n = n->next; 
    } 
} 
void insert_at_begin(int a)
{
    struct Node* insert=NULL;
    insert=malloc(sizeof(struct Node));
    if(head==NULL)
    {
        head=malloc(sizeof(struct Node));
        head->data=a;
        head->next=NULL;
    }
    else{
        insert->data=a;
        insert->next=head;
        head=insert;
    }
}
void insert_at_end(int a)
{
    struct Node* insert=NULL,*temp=NULL;
    insert=malloc(sizeof(struct Node));
    if(head==NULL)
    {
        head=malloc(sizeof(struct Node));
        head->data=a;
        head->next=NULL;
    }
    else{
        // printf("%d",head->next);
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        // printf("%d",temp);
        temp->next=insert;
        insert->data =a;
        insert->next=NULL;
    }
}
void delete_from_begin()
{
    if(head==NULL)
    {
        printf("List has is empty");
    }
    else{
        head=head->next;
    }
}
void delete_from_end()
{
    struct Node* del;
    if(head==NULL)
    {
        printf("List has is empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
    }
    else{
        int cnt=0;
        del = head;
        while(del->next->next!=NULL)
        {
            del=del->next;
        }
        del->next=NULL;
    }
}
int main()
{
    int a;
    // scanf("%d",&a);
    insert_at_begin(1);
    insert_at_end(2);
    insert_at_end(2);
    insert_at_end(3);
    // insert_at_begin(2);
    // insert_at_begin(3);
    // insert_at_begin(4);
    // delete_from_begin();
    delete_from_begin();
    delete_from_end();
    delete_from_end();
    printList(head);
	return 0;
}
