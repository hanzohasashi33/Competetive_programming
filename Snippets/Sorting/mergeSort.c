#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//For chars

void merge(char a[],int i,int k,int j){
    int left=i,right=k+1,p=0;
    char*b=(char*)calloc(100000,sizeof(char));
    while(left<=k && right<=j){
        if(a[left]-48<a[right]-48){
            b[p++]=a[left++];
        }
        else
        {
            b[p++]=a[right++];
        }
    }
    while (left<=k)
    {
        b[p++]=a[left++];
    }
    while (right<=j)
    {
        b[p++]=a[right++];
    }
    p=0;left=i;
    while(left<=j){
        a[left++]=b[p++];
    }   
    free(b); 
}

void mergeSort(char a[],int i,int j){
    if(i<j){
        int k=(i+j)/2;
        mergeSort(a,i,k);
        mergeSort(a,k+1,j);
        merge(a,i,k,j);
    }
}


//For integers

void mergeInt(int*a,int i,int k,int j){
    int left=i,right=k+1,p=0;
    int*b=(int*)calloc(100000,sizeof(int));
    while(left<=k && right<=j){
        if(a[left]<a[right]){
            b[p++]=a[left++];
        }
        else
        {
            b[p++]=a[right++];
        }
    }
    while (left<=k)
    {
        b[p++]=a[left++];
    }
    while (right<=j)
    {
        b[p++]=a[right++];
    }
    p=0;left=i;
    while(left<=j){
        a[left++]=b[p++];
    }   
    free(b); 
}

void mergeSortInt(int*a,int i,int j){
    if(i<j){
        int k=(i+j)/2;
        mergeSortInt(a,i,k);
        mergeSortInt(a,k+1,j);
        mergeInt(a,i,k,j);
    }
}


//Merge sort for linked lists

struct lnode{
    int data;
    struct lnode*next;
};

struct lnode*p;

void addNode(struct lnode**root,int data){
    struct lnode*temp=(struct lnode*)calloc(1,sizeof(struct lnode));
    temp->data=data;
    temp->next=NULL;

    if(*root==NULL){
        p=*root=temp;
    }
    else
    {
        p->next=temp;
        p=p->next;
    }
}

struct lnode* mergeLL(struct lnode* a, struct lnode* b) 
{ 
    struct lnode* result = NULL; 
    if(a == NULL){
        return (b); 
    } 
    else if(b == NULL){
        return (a); 
    }
    if(a->data <= b->data){ 
        result = a; 
        result->next = mergeLL(a->next, b); 
    } 
    else{ 
        result = b; 
        result->next = mergeLL(a, b->next); 
    } 
    return (result); 
} 

void setMidPointersLL(struct lnode* source,struct lnode** frontRef, struct lnode** backRef){ 
    struct lnode* fast; 
    struct lnode* slow; 
    slow = source; 
    fast = source->next;
    while (fast != NULL) { 
        fast = fast->next; 
        if (fast != NULL) { 
            slow = slow->next; 
            fast = fast->next; 
        } 
    }
    *frontRef = source; 
    *backRef = slow->next; 
    slow->next = NULL; 
}

void mergeSortLL(struct lnode**headRef) 
{ 
    struct lnode* head = *headRef; 
    struct lnode* a; 
    struct lnode* b; 
    if ((head == NULL) || (head->next == NULL)) { 
        return; 
    } 
    setMidPointersLL(head, &a, &b); 
    mergeSortLL(&a); 
    mergeSortLL(&b);
    *headRef = mergeLL(a, b); 
}


//Given a set of linked lists, sort them based upon their first element
//Sorting based upon first element of each color group

struct nodeUse{
    int data;
    int index;
};

void mergeUse(struct nodeUse*a,int i,int k,int j){
    int left=i,right=k+1,p=0;
    struct nodeUse*b=(struct nodeUse*)calloc(100000,sizeof(struct nodeUse));
    while(left<=k && right<=j){
        if(a[left].data<a[right].data){
            b[p++].data=a[left++].data;
            b[p-1].index=a[left-1].index;
        }
        else
        {
            b[p++].data=a[right++].data;
            b[p-1].index=a[right-1].index;
        }
    }
    while (left<=k)
    {
        b[p++].data=a[left++].data;
        b[p-1].index=a[left-1].index;
    }
    while (right<=j)
    {
        b[p++].data=a[right++].data;
        b[p-1].index=a[right-1].index;
    }
    p=0;left=i;
    while(left<=j){
        a[left++].data=b[p++].index;
        a[left-1].index=b[p-1].index;
    }   
    free(b); 
}

void mergeSortUse(struct nodeUse*a,int i,int j){
    if(i<j){
        int k=(i+j)/2;
        mergeSortUse(a,i,k);
        mergeSortUse(a,k+1,j);
        mergeUse(a,i,k,j);
    }
}

struct nodeUse*sortUponFirstEleLL(struct lnode**color,int n,int*numK){
    struct nodeUse*firstElementsOFLL=(struct nodeUse*)calloc(n,sizeof(struct nodeUse*));
    int k=0;
    for(int i=0;i<n;i++){
        struct lnode*ptr=color[i];
        if(ptr){
            firstElementsOFLL[k].data=ptr->data;
            firstElementsOFLL[k++].index=i;
        }
    }
    *numK=k;
    mergeSortUse(firstElementsOFLL,0,k-1);
    return firstElementsOFLL;
}


//OR



void Merge(struct node**A,int i,int mid,int j)
{
    
    struct node**temp=(struct node**)malloc((j-i+1)*sizeof(struct node*));
    
    int p1=i,p2=mid+1,p3=0;
    
    while(p1<=mid && p2<=j)
    {
        if(A[p1] && A[p2])
        {
            if((A[p1])->data < (A[p2])->data)
            {
                temp[p3]=A[p1];
                p1++;
            }
            else
            {
                temp[p3]=A[p2];
                p2++;
            }
        }
        else if(A[p2])
                {
                        temp[p3]=A[p1];
                        p1++;
                }
        else
        {
            temp[p3]=A[p2];
            p2++;
        }
    
        p3++;
    }
    
    while(p1<=mid)
    {
        temp[p3]=A[p1];
        p1++;
        p3++;
    }
    
    while(p2<=j)
    {
        temp[p3]=A[p2];
        p2++;
        p3++;
    }
    
    p1=i;
    p3=0;
    
    while(p3<(j-i+1))
    {
        A[p1]=temp[p3];
        p1++;
        p3++;
    }
    
    free(temp);
            
}
    
void MergeSort2(struct node**A,int i,int j)
{
    if(i<j)
    {
        int mid=(i+j)/2;
    
        MergeSort2(A,i,mid);
        MergeSort2(A,mid+1,j);
        Merge(A,i,mid,j);
    }
}



// int main(){
//     char*a=(char*)calloc(100000,sizeof(char));
//     scanf("%s",a);
//     int length=strlen(a);
//     mergeSort(a,0,length-1);
//     printf("%s",a);
//     free(a);
//     return 0;
// }

int main(){
    struct lnode*root=NULL;
    addNode(&root,4);addNode(&root,2);addNode(&root,1);addNode(&root,3);
    mergeSortLL(&root);
    struct lnode*ptr=root;
    while(ptr){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}