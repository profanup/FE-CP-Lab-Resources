/*Expt.12: WAP to find out the maximum and minimum value and their location in given array. */

#include<stdio.h>

int main()
{
	int arr[20],n,i,min,max,minloc,maxloc;
	printf("Enter now many value you wants to enter");
	scanf("%d",&n);
	printf("Enter %d value one by one......\n",n);

	for(i=0;i<n;i++)
    	scanf("%d",&arr[i]);

	min=max=arr[0];

	minloc=maxloc=0;
	for(i=1;i<n;i++)
	{
 		if(arr[i]<min)
		{
			min=arr[i];
			minloc=i;
		}
        	if(arr[i]>max)
        	{
	       		max=arr[i];
	        	maxloc=i;
        	}
	}
    	printf("\nGreatest value is %d found at location %d",max,maxloc);
    	printf("\nSmallest value is %d found at location %d\n",min,minloc);
    	return(0);
} 

