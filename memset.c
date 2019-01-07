#include<stdio.h>
#include<string.h>
void *mem_set(void* s1,int ch,int n);
int main()
{
	char str[100],ch,*p;
	int n;
	printf("Enter the string ");
	scanf("%s",str);
	printf("Enter the charecter ");
	scanf("%s",&ch);
	printf("Enter the value of n ");
	scanf("%d",&n);
	p=mem_set(str,ch,n);
	puts(str);
}
void *mem_set(void* s1,int ch,int n)
{
	int i;
	char *str=s1;
	for(i=0;i<n;i++)
	{
		str[i]=ch;
	}
	return str;
}

