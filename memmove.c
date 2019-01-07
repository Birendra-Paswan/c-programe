#include<stdio.h>
#include<string.h>
void *mem_set(void* ,void*,int n);
int main()
{
	char str1[100],str2[100],*p;
	int n;
	printf("Enter the string1: ");
	scanf("%s",str1);
	printf("Enter the string12 : ");
	scanf("%s",str2);
	printf("Enter the value of n ");
	scanf("%d",&n);
	p=mem_set(str1,str2,n);
	puts(str1);
	puts(str2);
}
void *mem_move(void *str1,void* str2,int n)
{
	int i,j;
	char *str=str1;
	for(i=0;i<n;i++)
	{
		str[i]=str[j];
		str1++;
		str2++;
	}
	return str1;
}

