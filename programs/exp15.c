/*Expt.15: Write a C program to input list of student names and sort them in Alphabetical order. */

#include<stdio.h>
#include<string.h>
#define listsize 100
int main()
{
  char name[listsize][20],str[20];
  int i,j,n;
  printf("\nHow many names you want to enter?");
  scanf("%d",&n);

  printf("\nEnter names in array:\n");
  for(i=0;i<n;i++)
    scanf("%s",name[i]);

  printf("\nList of names you entered:");
  for(j=0;j<n;j++)
    printf("\n%s",name[j]);


  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
	if(strcmp(name[i],name[j])>0)
        {
	     strcpy(str,name[i]);
	     strcpy(name[i],name[j]);
	     strcpy(name[j],str);
	}
    }
  }

  printf("\n\nNames List after sorting in Alphabetical order:");
  for(i=0;i<n;i++)
    printf("\n%s",name[i]);
  printf("\n");  
  return(0);
}
