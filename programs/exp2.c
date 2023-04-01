/* Expt.2:WAP to reverse a four digit number and also find sum of digits. */

#include<stdio.h>

int main()
{
	int u,t,h,th,num,sum=0,rev=0;
	printf("\nEnter four digit no:\n");
	scanf("%d",&num);
	if(num>=1000 && num<=9999)
	{
		u=num%10;
		t=(num/10)%10;
		h=(num/100)%10;
		th=(num/1000)%10;
		sum=u+t+h+th;
		rev=(u*1000)+(t*100)+(h*10)+th;
		printf("Reverse=%d, Sum=%d\n", rev,sum);
	}
      	else
		printf("\nEnter four digit number only\n");
	return(0);
	
}
