//https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

// Function to check the length of linklist
int isLengthEvenOrOdd(struct Node* head);
	
// Push function
void push(struct Node** head, int info)
{
	struct Node* node1 = new Node(info);
	node1->data = info;
	node1->next = (*head);
	(*head) = node1;
}

// Driver function
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tmp;
        struct Node* head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            push(&head, tmp);
        }
        if( isLengthEvenOrOdd(head) == 0) cout<<"Even\n";
        else cout<<"Odd\n";
    }
	return 0;
}

// } Driver Code Ends
/*structure of a node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     int sum=0;
     struct Node* temp = head;
     while(head!=NULL)
     {
         head=head->next;
         sum++;
     }
     return sum%2;
}
