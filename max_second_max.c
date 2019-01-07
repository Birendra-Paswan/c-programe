#include<stdio.h>
int main()
{
	int arr[50],i,n,temp=0,b,max=0;
	//n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter  the elements \n");
	for(i=0;i<n;i++)
	scanf("%d ",&arr[i]);
	for(i=0;i<n;i++)
	printf(" %d ",arr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(temp<arr[i])
		{
			temp=arr[i];
			b=i;
		}
	}
	printf("max=%d ",temp);
	for(i=1;i<n;i++)
	{
		if(max<arr[i] && b!=i)
			max=arr[i];
	}
	printf("second max=%d ",max);

}
