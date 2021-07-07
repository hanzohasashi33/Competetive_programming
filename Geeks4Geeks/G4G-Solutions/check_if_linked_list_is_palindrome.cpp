// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1/


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}


bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    stack <int> stack1;
    stack <int> test;
    stack <int> stack2;
    Node* temp = head;
    while(temp!=NULL)
    {
        stack1.push(temp->data);
        temp=temp->next;
    }
    test = stack1;
    while(!test.empty())
    {
        stack2.push(test.top());
        test.pop();
    }
    while(!stack1.empty()&&!stack2.empty())
    {
        if(stack1.top()!=stack2.top())
        {
            return false;
        }
        stack1.pop();
        stack2.pop();
    }
    return true;
}

