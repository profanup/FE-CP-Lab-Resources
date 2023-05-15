/*Expt.14: Write a menu driven program to perform addition, subtraction, multiplication of two matrices. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A[5][5],B[5][5],C[5][5],ra, rb, ca, cb;
	int ch,i,j,k;
	char x='y';
	
	printf("Enter rows and columns of matrix A :");
	scanf("%d%d",&ra,&ca);
	
	printf("Enter elements of matrix A....\n");
	for (i=0;i<ra;i++)
	  for (j=0;j<ca;j++)
	    scanf("%d",&A[i][j]);

	printf("Enter rows and columns of matrix B :");
	scanf("%d%d",&rb,&cb);
	
	printf("Enter elements of matrix B...\n");
	for (i=0;i<rb;i++)
	  for (j=0;j<cb;j++)
	    scanf("%d",&B[i][j]);
	fflush(stdin);
	printf("\nMenu for matrix operation....\n");
	printf(" 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Stop \n");
	do
	{
	  printf("Enter your choice :");
	  scanf("%d",&ch);
	  switch(ch)
 	  {
           case 1 : if((ra==rb)&&(ca==cb))
	      	    {
	  	       printf("\nAddition of matrices....\n");
	  	       for (i=0;i<ra;i++)
	   	       {
	                 for (j=0;j<cb;j++)
	                 {
			    C[i][j]=A[i][j]+B[i][j];
		 	    printf("\t%d",C[i][j]);
	                 }
	                 printf("\n");
	               }
	            }
		    else
	   		printf("Addition in not possible \n");
             	    break;
   	   case 2 : if ((ra==rb)&&(ca==cb))
	            {
	    	       printf("Subtraction of matrices is....\n");
		       for (i=0;i<ra;i++)
		       {
		         for (j=0;j<cb;j++)
			 {
			    C[i][j]=A[i][j]-B[i][j];
			    printf("\t%d",C[i][j]);
			 }
		         printf("\n");
		       }
		    }
		    else
		       printf("Subtraction is not possible \n");
		    break;
	   case 3 : if (ca==rb)
		    {
		      printf("Multiplication of matrices is...\n");
		      for (i=0;i<ra;i++)
		      {
			for (j=0;j<cb;j++)
			{
			   C[i][j]=0;
			   for (k=0;k<ca;k++)
			     C[i][j]+=A[i][k]*B[k][j];
			   printf("\t%d",C[i][j]);
			 }
			 printf("\n");
		      }
		    }
		    else
		       printf("Multiplication is not possible.\n");
		       break;
	   case 4 : exit(0);
	   default: printf("Invalid choice...... Enter again.\n");
         }
	fflush(stdin);
	
       }while(1);
return(0);
}

