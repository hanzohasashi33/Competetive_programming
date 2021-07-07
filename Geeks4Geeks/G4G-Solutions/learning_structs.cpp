// https://practice.geeksforgeeks.org/problems/learning-structs/1

//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*structure node of linked list
  to store data and link 
  to the next node
*/
struct Node
{
    //Your code here
    //Linked list has data and next members
    int data;
    struct Node* next;
    
};

// { Driver Code Starts.

Node *newNode(int data) //function to create a newNode of a linkedlist
{
    Node *temp=new Node;
    temp->data=data;
    temp->next=NULL;
    return temp;
}

Node *createList(Node *head,int n) //function to generate the linkedlist
{
    if(head==NULL)
    head=newNode(n);
    else
    head->next=createList(head->next,n);
    
    
    return head;
}

void Length(Node *head) //function that finds the length of the linked list
{
    Node *temp=head;
    int len=0;
    while(temp)
    {
        len++;
        temp=temp->next;
    }
    
    cout<<len<<endl;
}



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n; //number of nodes of linkedlist
	    Node *head=NULL; //initially head is null
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x; //input data for each node
	        head=createList(head,x); //create a node with that data as value
	    }
	    Length(head); //find length of the linked list
	    
	    
	}
	return 0;
}


  // } Driver Code Ends
