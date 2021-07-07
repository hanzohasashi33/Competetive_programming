// https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall/0/


#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int v;
	    cin>>v;
	    int adj[v][v];
	    int d[v][v];
	    for(int i=0;i<v;i++)
	    {
	        for(int j=0;j<v;j++)
	        {
	            cin>>adj[i][j];
	            d[i][j]=adj[i][j];
	        }
	    }
	    for(int i=0;i<v;i++)
	    {
	        d[i][i]=0;
	    }
	    for(int k=0;k<v;k++)
	    {
	        for(int i=0;i<v;i++)
	        {
	            for(int j=0;j<v;j++)
	            {
	                if(d[i][j]>d[i][k]+d[k][j]) d[i][j] = d[i][k]+d[k][j];
	            }
	        }
	    }
	    
	     for(int i=0;i<v;i++)
	     {
	        for(int j=0;j<v;j++)
	        {
	            if(d[i][j]==10000000) cout<<"INF"<<" ";
	            else cout<<d[i][j]<<" ";
	        }
	        cout<<endl;
	     }
	}

	return 0;
}
