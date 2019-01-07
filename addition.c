#include<stdio.h>
int main()
{

	int a,b;
	printf("Enter two number:");
	scanf("%d %d",&a,&b);
	while(b>0)
	{
		a++;
		b--;
	}
	printf("%d",a);
}
