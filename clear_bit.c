#include<stdio.h>
main()
{
	int data,pos;
	printf("Enter the data and position ");
	scanf("%d %d",&data ,&pos);
	data=data &~(1<<pos);
	printf("%d",data);
}
