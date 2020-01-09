#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct node 
{
  int data;
  struct node * next;
};


void push(struct node **head,int key)
{
  struct node * temp = (struct node *)malloc(sizeof(struct node));
  temp->data = key;
  temp->next = *head;
  *head = temp;
}

void printlinkedlist(struct node * head)
{
  struct node * p = head;
  while(p != NULL)
  {
    printf("%d",p->data);
    p = p->next;
  }
}


void swap(struct node ** a,struct node ** b)
{
  struct node * t = *a;
  *a = *b;
  *b = t;
}



int getsize(struct node * head)
{
  int size = 0;
  while(head != NULL)
  {
    head = head->next;
    size++;
  }
  return size;
}


struct node * addsamesize(struct node * head1,struct node * head2,int * carry)
{
  if(head1 == NULL)
  {
    return NULL;
  }
  int sum;
  struct node * result = (struct node *)malloc(sizeof(struct node));
  result->next = addsamesize(head1->next, head2->next, carry);

  sum = head1->data + head2->data + *carry;
  *carry = sum/10;
  sum = sum%10;
  result->data = sum;

  return result;
}





void addcarrytoremaining(struct node *head1,struct node * cur,int * carry,struct node ** result)
{
  int sum;
  if(head1 != cur)
  {
    addcarrytoremaining(head1->next, cur, carry, result);
    sum = head1->data + *carry;
    *carry = sum/10;
    sum = sum%10;
    push(result,sum);
  }
}







void addlist(struct node * head1,struct node * head2,struct node ** result)
{
  struct node * cur;
  if(head1 == NULL)
  {
    *result = head2;
    return ;
  }
  else if(head2 == NULL)
  {
    *result = head1;
    return;
  }
  
  int size1 = getsize(head1);
  int size2 = getsize(head2);

  int carry = 0;

  if(size1 == size2)
  {
    *result = addsamesize(head1, head2, &carry);
  }
  else 
  {
    int diff = abs(size1 - size2);

    if(size1 < size2)
    {
      swap(&head1,&head2);
    }
    for(cur = head1;diff--;cur = cur->next);
    *result = addsamesize(cur,head2,&carry);
    addcarrytoremaining(head1,cur,&carry,result);
  }

  if(carry > 0)
  {
    push(result,carry);
  }
}


int main()
{
  struct node * head1 = NULL,*head2 = NULL,*result = NULL;

  int arr1[] = {1,1,1,1,1,2,3,3,4,5,3,3,5,6,6,4,3,2,3,4,5,6,2,2,1};
  int arr2[] = {1,8,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,2};

  int size1 = sizeof(arr1)/sizeof(arr1[0]);
  int size2 = sizeof(arr2)/sizeof(arr2[0]);

  int i = 0;
  for(i = size1 - 1 ;i >=0 ;i--)
  {
    //continue;
    push(&head1,arr1[i]);
  } 
  for(i = size2 - 1;i >= 0;i--)
  {
    //continue;
    push(&head2,arr2[i]);
  }
  printlinkedlist(head1);
  printf("\n");
  printlinkedlist(head2);
  printf("\n");
  addlist(head1,head2,&result);
  printlinkedlist(result);
  printf("\n");
  return 0;
}
