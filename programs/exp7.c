/* Expt.7: WAP  to convert a decimal number to binary equivalent.*/

#include<stdio.h>
int main()
{
       int n,num,r;
       long int bin=0,m=1;
       printf("\nEnter integer number:");
       scanf("%d",&num);
       n=num;
       while(n!=0)
       {
	    r=n%2;
	    bin=m*r+bin;
	    m=m*10;
	    n=n/2;
      }
      printf("\n%d in decimal is %ld in binary.\n",num,bin);
      return(0);
 }

