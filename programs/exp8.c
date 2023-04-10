/*Expt.08: Write a program to print the sum of cosine series of given angle.*/

#include<stdio.h>
#include<math.h>
const float pi=3.14;
int main()
{
	int angle,i,sign=1,t=1,y=0;
	long int fact=1;
	float x,sum=0;
	printf("Enter The Angle  in Degrees: ");
	scanf("%d",&angle);
	printf("Enter Number of Terms: ");
	scanf("%d",&t);
	x=(pi/180)*angle;
	for(i=1;i<=t;i++)
	{
		sum+=(sign*pow(x,y))/fact;
		sign=-sign;
		y+=2;
		fact*=y*(y-1);
	}
	printf("calculated sum of cos(%d)= %f",angle,sum);
	return(0);


}

