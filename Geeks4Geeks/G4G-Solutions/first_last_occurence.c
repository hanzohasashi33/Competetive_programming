// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x/0



int binarysearch_first(int* arr, int n, int key)
{
	int low = 0;
	int high = n-1;
	int result = -1;
	while(low<=high)
	{
		int mid = low + (high-low)/2;
		if(arr[mid]==key)
		{
			result = mid;
			high = mid-1;
		}
		else if(arr[mid]>key)
		{
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}
	return result;
}


int binarysearch_last(int* arr, int n, int key)
{
	int low = 0;
	int high = n-1;
	int result = -1;
	while(low<=high)
	{
		int mid = low + (high-low)/2;
		if(arr[mid]==key)
		{
			result = mid;
			low = mid+1;
		}
		else if(arr[mid]>key)
		{
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}
	return result;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int* arr = (int*)calloc(n,sizeof(int));
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        if(binarysearch_first(arr,n,k)==-1)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d %d\n",binarysearch_first(arr,n,k),binarysearch_last(arr,n,k));
        }
        free(arr);
    }
	return 0;
}

