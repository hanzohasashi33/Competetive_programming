#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};


struct node * createlinkedlist(int n)
{
    struct node *head = NULL,*temp,*p;
    int i = 0;

    for(i = 0;i < n;i++)
    {
        int value;
        printf("Enter the data : ");
        scanf("%d",&value);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = value;
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
        }
        else 
        {
            p = head;
            while(p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    return head;
}



void printlinkedlist(struct node * head)
{
    int i = 0;
    struct node * p = head;
    while(p != NULL)
    {
        printf("%d-->",p->data);
        p = p -> next;
    }
    printf("NULL");
}



void deletenode(struct node ** head,int key)
{
    struct node * temp,*p = *head;
    if(p != NULL && p->data == key)
    {
        *head = p->next;
        free(p);
        return ;
    }

    while(p != NULL && p->data != key)
    {
        temp = p;
        p = p->next;
    }

    if (p == NULL)
    {
        printf("The given key is not present in the linked list");
        printf("\n");
        return;
    }
    else 
    {
        temp->next = p->next;
        free(p);
    }
}



int main()
{
    int n;
    struct node * head = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    head = createlinkedlist(n);
    printlinkedlist(head);
    printf("\n");
    int x;
    printf("ENter the element you want to be removed : ");
    scanf("%d",&x);
    deletenode(&head,x);
    printlinkedlist(head);
    return 0;
}
