#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
void linkedListTraversal(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node*insertAtIndex(struct Node*head,int data,int index)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
int main()
{
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*forth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    forth=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=41;
    third->next=forth;
    forth->data=66;
    forth->next=NULL;
     
    linkedListTraversal(head);
    head=insertAtIndex(head,56,1);
    printf("\n Linked list after insertion\n");
    linkedListTraversal(head);
    return 0;
}

