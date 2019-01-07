#include<stdio.h>
int rev_digit(int n);
int main()
{
	int n,k;
	printf("Enter the number ");
	scanf("%d",&n);
	k=rev_digit(n);
	printf("%d ",k);
}
int rev_digit(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum*10+n%10;
		n=n/10;
	}
	return sum;

}

