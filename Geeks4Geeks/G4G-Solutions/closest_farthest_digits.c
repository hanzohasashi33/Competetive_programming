// https://practice.geeksforgeeks.org/problems/swap-the-closest-and-farthest-digits/0/


#include<string.h>
int main()
{
	int i,j,l,m,n,k,t,v=0;

	char x1,x2,s1,s2,h;
	scanf("%d",&t);
while(t--)
{
		char x[100],s[100];
	if(v==0)
	{
	scanf("%c",&h);	
	v++;
}
	gets(s);
	
	k=strlen(s);
	i=0;
	for(m=0;m<k-1;m++)
	{
		if(s[m]==' '  )
		{
		
		i=m;
		
		//printf("%d\n\n",i);
		break;
		
		
	    }
	}
	
	x1=s[0];
	x2=s[i-1];
	
	s1=s[i+1];
	s2=s[k-1];
	
	s[i-1]=s1;
	s[0]=s2;
	
	
	s[i+1]=x2;
	s[k-1]=x1;
	
	printf("%s\n",s);
	
	
	for(i=0;i<k+2;i++)
	{
		s[i]='0';
	}
	
}
}
