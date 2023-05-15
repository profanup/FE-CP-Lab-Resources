/*Expt.13: Write a C program to sort single dimensional array in ascending order. */

#include<stdio.h>

int main()
{
  int a[10],sa,i,j,temp;
  printf("\nProgram to Sort Single dimention Array...\n");

  printf("\nEnter the size of the array: ");
  scanf("%d",&sa);

  printf("\n\nEnter the elements of the array .....\n");
  for (i=0;i<sa;i++)
    scanf("%d",&a[i]);

  printf("\n\nSORTED ARRAY IN DESCENDING ORDER IS.....\n\n");
  for(i=0;i<sa;i++)
  {
    for(j=i+1;j<sa;j++)
    {
     if(a[i] < a[j])
     {
       temp = a[i];
       a[i] = a[j];
       a[j] = temp;
     }
    }
  }
  printf("\n Array Elements after sorting are :\n");
  for(i=0;i<sa;i++)
    printf("a[%d]=%d\n",i,a[i]);
  return(0);   
}
