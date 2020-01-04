#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node * next;
}node;



node * createlinkedlist(int n)
{
    int i = 0;
    node * head = NULL;         //for beginning of node
    node * temp = NULL;         //for temporary instance of a node        
    node * p = NULL;            //for traversel of linked list
    for(i = 0;i < n;i++)
    {
        temp = (node *)malloc(sizeof(node));
        printf("Enter data : ");
        scanf("%d",&(temp->data));
        temp->next = NULL;

        if(head == NULL)      //for start of emptylist
        {
            head = temp;      //if list is empty create the first node as temp
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



void displaylinkedlist(node * head)
{
    node * p = head;
    while(p != NULL)
    {
        printf("%d-->",p->data);
        p = p->next;
    }
    printf("NULL");
}





int main()
{
    int n = 0;
    node * head = NULL;
    printf("Enter number of nodes : ");
    scanf("%d",&n);
    head = createlinkedlist(n);
    displaylinkedlist(head);
    return 0;
}
