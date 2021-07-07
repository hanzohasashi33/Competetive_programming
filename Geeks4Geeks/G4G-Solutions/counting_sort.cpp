//https://practice.geeksforgeeks.org/problems/counting-sort/1

// C Program for counting sort
#include <stdio.h>
#include <string.h>
#define RANGE 255

// The main function that sort the given string arr[] in
// alphabatical order
void countSort(char arr[]);

// Driver program to test above function
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        char arr[n+1];
        scanf("%s",arr);
        countSort(arr);
    printf("%s\n", arr);
    }return 0;
}
// } Driver Code Ends
// The main function that sort the given string arr[] in
// alphabatical order
void countSort(char arr[])
{
 
int index[26]={0};
int count=0;
for(int i=0;arr[i]!='\0';i++)
{
index[arr[i]-97]++;

count++;
}

for(int i=1;i<=25;i++)
{

index[i]+=index[i-1];

}

char result[count+1];
for(int i=0;arr[i]!='\0';i++)
{
int k=index[arr[i]-'a'];
result[k-1]=arr[i];
index[arr[i]-'a']--;
}
for(int i=0;arr[i];i++)
{
arr[i]=result[i];

}
}

