#include<stdio.h>
int main()
{
  int t,n,m;
  scanf("%d",&t);
  while(t--)
  {
  scanf("%d %d",&m,&n);
  long long int a[m],b[n],c[m+n];
  for(int i=0;i<m;i++)
    scanf("%lld",&a[i]);
  for(int i=0;i<n;i++)
    scanf("%lld",&b[i]);
  int p=0,q=0,t=0;
  while((p<m)&&(q<n))
  {
    if(a[p]>b[q])
    {
      c[t]=a[p];
      p++;
      t++;
    }
    else
    {
      c[t]=b[q];
      q++;
      t++;
    }
  }
  if(p<m)
  {
    while(p<m)
    {
      c[t]=a[p];
      t++;
      p++;
    }
  }
  else if(q<n)
  {
    while(q<n)
    {
      c[t]=b[q];
      t++;
      q++;
    }
  }
  for(int i=n+m;i>=0;i--)
    printf("%lld ",c[i]);
  printf("\n");
  }
  return 0;
}
