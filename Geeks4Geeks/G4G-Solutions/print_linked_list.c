// https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1

#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}*start;

void insert();
void display(struct Node *head);
//struct Node *start;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      insert();
      display(start);
      printf("\n");
    }
    return 0;

}


 void insert()
 {
     int n,value,i;
     scanf("%d",&n);
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
/*This is a function problem.You only need to complete the function given below*/
/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
     Node(int x){
         data = x;
         next  NULL;
     }
  }
*/
void display(struct Node *head)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    free(temp);
}
