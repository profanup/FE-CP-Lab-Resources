/* Expt.17:Write a program to check whether a matrix is symmetric or not by writing a user defined function. */

#include<stdio.h>
#include<math.h>
#define size 25
int symmetric(int a[size][size],int r,int c);
int main()
{
	int r,c,i,j,a[size][size],ans;
	
	printf("Enter number of rows & columns:");
	scanf("%d%d",&r,&c);

	printf("Enter the elements :");
	for(i=0;i<r;i++)
	{
	  for(j=0;j<c;j++)
	    scanf("%d",&a[i][j]);
	  printf("\n");  
	}	
        if(r==c)
	{
	  ans=symmetric(a,r,c);
	  if(ans==1)
	     printf("\n Matrix is symmetric");
	  else
	     printf("\n Matrix is not symmetric");
	}
	else
	  printf("\n Invalid matrix. Input a square matrix.\n");
return(0);
}
int symmetric (int a[size][size],int r,int c)
{
	int i,j,flag=1;
	for(i=0;i<r;i++)
	  for(j=0;j<c;j++)
	    if(a[i][j] !=a[j][i])
	    {
		flag=0;
		return(flag);
	    }
	return(flag);
}
