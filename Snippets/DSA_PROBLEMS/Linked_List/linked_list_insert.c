#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};



struct node * createlinkedlist(int n)
{
    struct node * head = NULL;
    struct node * temp = NULL;
    struct node * p = NULL;

    int i = 0;
    for(i = 0;i < n;i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d",&(temp->data));
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




void addatbeginning(struct node **head,int key)
{
    struct node * temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = *head;
    *head = temp;
}



void addatend(struct node **head,int key)
{
    struct node * temp;
    struct node * last = *head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = temp;
}

void append(struct node **head,int key,int position)
{
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;

    struct node *p = *head;
    
    int i = 0;
    for(i = 1;i < position - 1;i++)
    {
        p = p->next;
    }

    temp->next = p->next;
    p->next = temp;

}

void displaylinkedlist(struct node * head)
{
    int i = 0;
    struct node * p = head;
    while(p != NULL)
    {
        printf("%d-->",p->data);
        p = p->next;
    }
    printf("NULL");
}


int main()
{
    struct node * head = NULL;
    int n;
    printf("Enter the number of nodes you want : ");
    scanf("%d",&n);
    head = createlinkedlist(n);
    displaylinkedlist(head);
    printf("\n");
    int atbeg;
    printf("Enter the beginning new node : ");
    scanf("%d",&atbeg);
    addatbeginning(&head,atbeg);
    displaylinkedlist(head);
    printf("\n");
    int atend;
    printf("Enter the end new node : ");
    scanf("%d",&atend);
    addatend(&head,atend);
    displaylinkedlist(head);
    printf("\n");
    int atrand,position;
    printf("Enter the new node and position : ");
    scanf("%d%d",&atrand,&position);
    append(&head,atrand,position);
    displaylinkedlist(head);
    printf("\n");
    return 0;
}
