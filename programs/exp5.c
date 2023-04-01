//Expt.5:WAP to find the roots of quadratic equation.

 #include<stdio.h>
 #include<math.h>
 int main()
 {
	int a,b,c,z;
	float r1,r2;
	printf("Enter the coefficients of quadratic equations as.....\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0)
	{
		printf("Equation is not quadratic equation.....\n");

	}
	else
	   {
	       z=(b*b)-(4*a*c);
	       if(z==0)
		 {
		    printf("Roots are real & equal.....\n");
		    r1 = r2 = -b/(2*a);
		    printf("\nRoot1=%f",r1);
		    printf("\nRoot2=%f",r2);
		  }
                else
		   if(z>0)
		     {
			printf("Roots are real & distinct.....\n");
			r1=(float)(-b+sqrt(z))/(2*a);
			r2=(float)(-b-sqrt(z))/(2*a);
			printf("Root 1 = %f ",r1);
			printf("\nRoot 2 = %f",r2);
		     }
		   else
		      {
			printf("Roots are imaginary.....\n");
			r1= -(float)b/(2*a);
				;
			printf("Root 1 =%0.2f+i(%0.2f)",r1,r2);
			printf("\nRoot2=%0.2f-i(%0.2f)",r1,r2);
		      }
	     }
	return(0);

}
