/* Expt.11: Write a program to print the Pascal triangle. */
#include<stdio.h>
int main()
{
   	int lines,i,j,bin,sp;
   	printf("Enter no. of lines of triangle : ");
  	scanf("%d",&lines);
   	printf("\n\t\t\t\t PASCAL TRIANGLE \n\n");
   	for(i=0;i<lines;i++)
    	{
		for(sp=1;sp<=34-3*i;sp++)
	      	   printf(" ");
		for(j=0;j<=i;j++)
	  	{
	   		if(j==0)
	      			bin=1;
	    		else
	      			bin = bin*(i-j+1)/j;
	    			printf("%6d",bin);
	 	}
		printf("\n");
    	}
 	return(0);
}
