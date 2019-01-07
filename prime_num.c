#include<stdio.h>
int main()
{ 
     int i,num,cnt=0;
     printf("Enter the number to check given num is prime or not \n");
     scanf("%d",&num);
     for(i=0;i<num;i++)
     {
        if(num%2==0)
        cnt++;
     }
     if(cnt==2)
     printf("%d is a prime number",num);
     else
     printf("%d is not a prime",num);
}
