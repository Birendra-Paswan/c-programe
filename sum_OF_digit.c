#include<stdio.h>
int sum_digit(int n);
int main()
{
	int n,k;
	printf("Enter the number ");
	scanf("%d",&n);
	k=sum_digit(n);
	printf("%d ",k);
}
int sum_digit(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	return sum;

}

