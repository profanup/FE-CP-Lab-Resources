/* Expt1: WAP to find volume of a cone. */

#include<stdio.h>
const float pi=3.14;
int main()
{
	float r,h;
	double volume;
	printf("\nEnter radius and height of a cone:");
	scanf("%f %f",&r,&h);
	volume=(1.0/3.0)*(pi*r*r*h);
	printf("\nVolume of a cone=%f\n",volume);
	return(0); 
}
