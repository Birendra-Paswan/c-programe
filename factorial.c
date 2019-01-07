#include<stdio.h>
int fact(int n);
int main()
{
	int x,n;
	printf("Enter the number ");
	scanf("%d",&n);
	x=fact(n);
	printf("%d ",x);
}
int fact(int n)
{
	int f=1;
	while(n>0)
	{
		f=f*n;
		n--;
	}
	return f;
}

