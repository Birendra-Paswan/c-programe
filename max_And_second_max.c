#include<stdio.h>
main()
{
	int arr[10],large1,large2,i, n;
	printf("Enter the elemnets ");
	scanf("%d",&n);
	printf("enter elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	large1=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>large1)
		{
			large1=arr[i];
	        }
	}
	large2=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>large2 && arr[i]<large1)
			large2=arr[i];
	}
	printf("large1=%d \t large2= %d",large1,large2);
}
