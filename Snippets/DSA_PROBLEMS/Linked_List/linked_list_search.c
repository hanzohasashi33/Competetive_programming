#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node 
{
    int data;
    struct node * next;
};



struct node * createlinkedlist(int n)
{
    struct node * head = NULL,* temp,* p;
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
    struct node * p = head;
    while(p != NULL)
    {
        printf("%d-->",p->data);
        p = p->next;
    }
    printf("NULL");
}




int searchlinkedlist(struct node * head,int x)
{
    int count = 0;
    while(head != NULL)
    {
        count += 1;
        if(head->data == x)
        {
            return count;
        }
        head = head->next;
    }
    return 0;
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
    printf("Enter the number you want to be searched in the linked list : ");
    scanf("%d",&x);
    int value = searchlinkedlist(head,x);
    printf("%d",value);
    return 0;
}
