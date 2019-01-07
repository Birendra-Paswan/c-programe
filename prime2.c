#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter the number to chek prime\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(i==num)	
	        printf("%d is prime number ",num);
	else
		printf("%d is not prime numebr ",num);
}
