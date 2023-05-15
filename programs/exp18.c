/*Expt.18: Write a C program to calculate  x^y using a recursive user defined function, where 'y' should be an integer value. */

#include <stdio.h>
double power (double,int);/*prototype of power function*/
int main()
{
	double ans,x;
	int y;

	printf("\n Input value of base:");
	scanf("%lf",&x);

	printf("\n Input value of power to raise to (integer only):");
	scanf("%d",&y);

	ans=power(x,y);
	printf("result=%.0lf\n",ans);
	
	return(0);
}
/*function body for power function */
double power(double m,int n)
{
	double result;

	if(n==0)
  	  result=1;
	else
  	  result=m*power(m,n-1);
	return result;
}
