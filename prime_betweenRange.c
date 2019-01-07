#include<stdio.h>
int main()
{
	int i,x,min,max;
	printf("Enter the min and max number\n");
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		for(x=2;x<=i;x++)
		{
		    if(i%x==0)
			break;
	        }
	if(i==x)
		
	        printf("%d  ",x);
	}
}
