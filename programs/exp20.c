/*Expt No.20: Write a C program to find addition of two complex no by passing structure to a function.*/

#include<stdio.h>

/* Structure definition */
struct complex
{
  float real,imag;
};

/*function prototype */
struct complex add(struct complex,struct complex);

int main()
{
  struct complex a,b,c;
  
  printf("\nEnter First complex no");
  printf("\nReal part:");
  scanf("%f",&a.real);
  printf("Imaginary part:");
  scanf("%f",&a.imag);

  printf("\nEnter Second complex no");
  printf("\nReal part:");
  scanf("%f",&b.real);
  printf("Imaginary part:");
  scanf("%f",&b.imag);

  /* Call to fucntion add*/
  c=add(a,b);  

  printf("\nAddition is : %0.2f +i(%0.2f)\n",c.real,c.imag);
  return(0);
}
/* add function body / Definition */
struct complex add(struct complex x,struct complex y) 
{
   struct complex T;
   T.real = x.real + y.real;
   T.imag = x.imag + y.imag;
   return T;
}
