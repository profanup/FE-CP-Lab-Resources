/*Expt.10: Write a program to generate the series of prime  numbers from 1 to 
  entered limit. */

#include<stdio.h>
#include<math.h>
int main()
{
       int limit,num,flag=1,b,d;
       printf("Enter the limit: ");
       scanf("%d",&limit);
       printf("\nThe list of prime numbers between 1 and %d are......\n",limit);
       for(num=2;num<=limit;num++)
       {
       	b=(int)(sqrt(num));
       	flag=1;
       	for(d=2;d<=b;d++)
	    {
	   	    if(num%d==0)
	    	{
	      		flag=0;
	     		 break;
	   	    }
        }
	    if(flag==1)
	  	    printf("%6d\n",num);
       }
     return(0);
}

