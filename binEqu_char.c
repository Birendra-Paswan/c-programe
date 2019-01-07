#include<stdio.h>
main()
{
	unsigned char v=0;
LOOP:
	printf("%d %c ",v,v);
	v++;
	if(v<=127)goto LOOP;
}
