/*Expt.4:WAP to check whether the given number is Armstrong number or not. */

#include<stdio.h>
#define cube(m) m*m*m
int main()
{
       int n,sum=0,u,t,h;
       printf("\nEnter a three digit number:");
       scanf("%d",&n);
       if(n>=100 && n<1000)
       {
          u=n%10;
          t=(n/10)%10;
          h=n/100;
          sum = cube(u) + cube(t) + cube(h);
          if(n==sum)
            printf("\nNumber is Armstrong\n");
          else
	    printf("\nNumber is not Armstrong\n");
       }
       else
          printf("%d is not three digit number\n",n);
       return(0);
}
