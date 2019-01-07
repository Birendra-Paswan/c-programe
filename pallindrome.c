#include<stdio.h>
int pallindrome(int num);
int main()
{
	int num,k;
	printf("Enter the number ");
	scanf("%d",&num);
	k=pallindrome(num);
	if(k==num)
		printf("Pallindrome ");
	else
		printf("Not pallindrome ");
}
int pallindrome(int num)
{
	int rev=0,rem;
	while(num!=0)
	{
		rem=num%10;
	//	num=num/10;
		rev=rev*10+rem;
		num=num/10;
	}
	return rev;

}
