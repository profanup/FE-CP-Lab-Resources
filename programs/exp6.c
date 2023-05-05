/*Expt.6: WAP to display the grade of the student w.r.t. marks of 3 subject 
  each out of 100 using switch statement check for data validity as well. */

#include<stdio.h>     
#include<math.h>
int main()
{
	int m1,m2,m3,total,grade;
	float percentage;
	repeat: printf("Enter the marks of 3 subjects as M1, M2 and M3: ");
	scanf("%d%d%d",&m1,&m2,&m3);
	if((m1>=0&&m1<=100) && (m2>=0&&m2<=100) && (m3>=0&&m3<=100))
	{
	   if((m1>=40) && (m2>=40) && (m3>=40))
	   {
	       total=m1+m2+m3;
	       percentage=total/3.0;
	       grade=floor(percentage)/10;
	       printf("Total marks scored : %d",total);
	       printf("\nPercentage : %.2f \n",percentage);
	       switch(grade)
	       {
		     case 10:
		     case 9 :
		     case 8 :
		     case 7 :printf("DIXTINCTION\n"); break;
		     case 6 :printf("GRADE = FIRST CLASSn\n"); break;
		     case 5 :printf("GRADE = SECOND CLASS\n"); break;
		     case 4 :printf("GRADE = PASS CLASS\n"); break;
	       }
	     }
	  else
	      printf("FAIL.......TRY AGAIN....\n");
	  }
	else
	   {
	      printf("ERROR ! Entered invalid marks......\n");
	      goto repeat;
	   }
	return(0);
}

