// https://practice.geeksforgeeks.org/problems/tower-of-hanoi/0


#include <iostream>
#include<math.h>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux)
{
    if(n==1)
    {
        cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        return;
    }
    towerOfHanoi(n-1,from,aux,to);
    cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    towerOfHanoi(n-1,aux,to,from);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        towerOfHanoi(n,'1','3','2');
        cout<<pow(2,n)-1<<endl;
    }
    return 0;
}
