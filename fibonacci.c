#include<stdio.h>
int fibo(int num);
int main()
{
	int num,k;
	printf("Enter the number ");
	scanf("%d",&num);
	k=fibo(num);
}
int fibo(int num)
{
   int a=0,b=1,k=2,r,f;
   printf("%d %d ",a,b);
   while(k<num)
   {
       f=a+b;
       a=b;
       b=f;
       printf(" %d ",b);
       k++;
   }
}
