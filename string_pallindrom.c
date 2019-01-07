#include<stdio.h>
#include<string.h>
int chek_pallindrom(char *x);
main()
{
	char str1[100],str2[200];
	printf("Enter the string ");
	scanf("%s",str1);
	strcpy(str2,str1);
	chek_pallindrom(str1);
	if(strcmp(str1,str2)==0)
		printf("is pallindrome ");
	else
		printf("is not pallindrome ");

}
int chek_pallindrom(char *x)
{
        int len=strlen(x);
	int i;
	char temp;
	for(i=0;i<len/2;i++)
	{
		temp=x[i];
		x[i]=x[len-i-1];
		x[len-i-1]=temp;
	}

}

