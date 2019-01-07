#include<stdio.h>
int large_number(int arr[]);
int main()
{
	int arr[20];
	int k,i,n;
	n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter the number of elements ");
	scanf("%d",&n);
	printf("Enter the elements of aarr ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	k=large_number(arr);
	printf("%d",k);
}
int large_number(int arr[])
{
	int i,big,n;
	big=arr[0];
	for(i=1;i<n;i++)
	{
		if(big<arr[i])
		big=arr[i];
	}
	return big;
}
