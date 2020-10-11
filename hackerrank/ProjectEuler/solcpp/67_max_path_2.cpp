#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
		int n;
		scanf("%d",&n);
		while(n--){
				int r;
				scanf("%d",&r);
				int data[r][r];
				for (int i=0;i<r;i++){
						for (int j=0;j<=i;j++){
								int right,left;
								scanf("%d",&data[i][j]);
								if(i>0){
										if (j==0)
												left=0;
										else
												left=data[i-1][j-1];
										if(i==j)
												right=0;
										else
												right=data[i-1][j];
										//cout<<i<<j<<" --l-"<<left<<" "<<"r-"<<right<<endl;
										data[i][j]+=max(right,left);
								}
								//printf("%d ",data[i][j]);
						}
						//printf("\n");
				}
				int ans=0;
				for (int i=0;i<r;i++)
						ans=max(ans,data[r-1][i]);
				printf("%d\n",ans);
		}
return 0;				
}

