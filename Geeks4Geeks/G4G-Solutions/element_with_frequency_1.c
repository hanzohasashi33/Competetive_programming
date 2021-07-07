// https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array/0


int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d ",&arr[i]);
	    }
	    i=0;
	    while(i<n)    {
	        if(arr[i]==arr[i+1])
	        {
	            i+=2;
	        }
	        if(arr[i]!=arr[i+1])
	        {
	            printf("%d\n",arr[i]);
	            break;
	        }
	    }
	}
	return 0;
}
