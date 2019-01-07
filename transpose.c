#include<stdio.h>
int main()
{
	int row,col,i,j,mat[100][100],trans[100][100];
	printf("Enter the number of rows and col: ");
	scanf("%d%d",&row,&col);
	printf("enter the elements in the matrix: \n");
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d", &mat[i][j]);
	printf("Elements of the matrix is: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
	                printf("%d\t",mat[i][j]);
	                printf("\n");
	}

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
	trans[j][i]=mat[i][j];


	printf("transpose of matrix is:\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
	                printf("%d\t",trans[i][j]);
	                printf("\n");
	}
}
