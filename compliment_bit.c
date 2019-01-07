#include<stdio.h>
main()
{
	int pos,num;
	printf("Enter the number ");
	scanf("%d",&num);
	printf("Enter the position ");
	scanf("%d",&pos);
	num=num^(1<<pos);
	printf("%d ",num);
}
