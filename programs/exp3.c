/*Expt.3:WAP to check ginen year is Leap year or not */
#include<stdio.h>

int main()
{
unsigned int year;
printf("Enter the year: ");
scanf("%u",&year);
if(year%100==0)
{ 
   if(year%400==0)
     printf("Year is leap year.\n");
   else
     printf("Year is not a leap year.\n");
}
else 
{
   if(year%4==0)
     printf("Year is leap year.\n");
   else
     printf("Year is not leap year.\n");
}
return(0);
}
