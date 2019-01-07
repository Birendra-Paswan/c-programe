#include<stdio.h>
int main()
{
    int fact=1,i,num;
    printf("Enter the number ");
    scanf("%d",&num);
    if(num<0)
	    printf("No factorial for negative number");
    else
    {
    for(i=1;i<=num;i++)
	    fact=fact*i;
    printf("%d ",fact);
    }
}
