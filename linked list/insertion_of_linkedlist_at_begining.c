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
struct Node*insertAtFirst(struct Node*head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
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
    head=insertAtFirst(head,56);
    printf("\n Linked list after insertion\n");
    linkedListTraversal(head);
    return 0;
}


