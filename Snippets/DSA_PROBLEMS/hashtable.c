#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define p 997

struct node 
{
    int data;
    struct node * next;
};

struct node * hasharray[p] = {0};

int hashvalue(int key)
{
    return key%p;
}


void Insetatbeg(struct node **head,int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = *head;
    *head = temp;
}

void printlinkedlist(struct node * head)
{
    while(head != NULL)
    {
        printf("%d",head->data);
        head = head->next;
    }
    printf("\n");
}


void traverse(struct node * head,char * txt,char * ptn,int n,int m)
{
    int i = 0;
    int k;
    while(head != NULL)
    {
        for(i = head->data,k = 0;k < m;k++)
        {
            if(txt[i + k] != ptn[k])
            {
                break;
            }
        }
        printf("There is a match at index %d.\n",head->data);
        head = head -> next;
    }
}




int main()
{
    char *txt = (char *)malloc(sizeof(char) * 1000000);
    char *ptn = (char *)malloc(sizeof(char) * 1000000);
    scanf("%s",txt);
    scanf("%s",ptn);

    int n = strlen(txt);
    int m = strlen(ptn);
    int i,j;

    for(i = 0;i < m;i++)
    {
        txt[i] -= '0';
    }
    for(j = 0;j < n;j++)
    {
        ptn[j] -= '0';
    }

    int x = 2;
    int ptnhash = ptn[0];
    int txthash = txt[0];

    for(j = 1;j < m;j++)
    {
        x = hashvalue(x * 2);
        ptnhash = hashvalue(ptnhash * 2 + ptn[j]);
        txthash = hashvalue(txthash * 2 + txt[j]);
    }
    Insetatbeg(&hasharray[txthash],0);
    for(int i = 1;i < n - m + 1;i++)
    {
        txthash = hashvalue(txthash * 2 + txt[i + m - 1] - (x * txt[i - 1]));
        Insetatbeg(&hasharray[txthash],i);
    }
    printlinkedlist(hasharray[ptnhash]);
    traverse(hasharray[ptnhash],txt,ptn,n,m);
    return 0;
}