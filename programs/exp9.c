/* Expt.9: WAP to display terms of Fibonacci  series upto entered term. */

#include<stdio.h>
int main()
{
    int terms,i,f1,f2,f3;
    printf("\nEnter the number of terms :");
    scanf("%d",&terms);
    f1=0; f2=1;
    printf("Fibonacci series upto %d terms is:\n",terms);
    printf("%d\n%d\n",f1,f2);

    i=3;
    while(i<=terms)
    {
       f3=f1+f2;
       printf("%d\n",f3);
       f1=f2;
       f2=f3;
       i++;
    }
    return(0);
}

