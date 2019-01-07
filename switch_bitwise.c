#include<stdio.h>
int main()
{
	int result,bit,data;
	char input;
INPUT: printf("Enter data ");
       scanf("%d",&data);
BIT:   printf("Enter the position ");
       scanf("%d",&bit);
       if(!((bit>=0)&&(bit<=31)))
       {
	       printf("Enter the valid position ");
	       goto BIT;
       }
Loop: printf("\n***************MENU*******************\n");
      printf("t/T\t Test bit\n");
      printf("s/S\t Set bit\n");
      printf("c/C\t Clear bit\n");
      printf("m/M\t Compliment bit\n");
      printf("i/T\t Input again\n");
      printf("e/E\t Exit again\n");
      printf("Enter your choice:\n");
      scanf("%c",&input);
      scanf("%c",&input);

      switch(input)
      {
	     case 't' :
	     case 'T' : result=((data>>bit)&1);
			      printf("result=%d\n",result);
			      goto Loop;
	     case 's' :
	     case 'S' :result=(data|(1<<bit));
			      printf("result=%d\n",result);
			      goto Loop;
	     
	     case 'c':
	     case 'C':result=(data&~(1<<bit));
			      printf("result=%d\n",result);
			      goto Loop;
	     case 'm':
	     case 'M':result=(data^(1<<bit));
			      printf("result=%d\n",result);
			      goto Loop;
	     case 'i':
	     case 'I':goto INPUT;
	     case 'e':
	     case 'E': return 0;     }
}
