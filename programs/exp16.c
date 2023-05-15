/*Expt.16: Write a C program to check if the given string is palindrome or not. */

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,flag=1;
	char str[10];

	printf("\nEnter the string:");
	gets(str);
	/*scanf("%s",str);*/

	j=strlen(str);

	for(i=0;i<j/2;i++)
	{
		if(str[i]!=str[j-1-i])
		{
                     flag=0;
		     break;
		}
	}
	if(flag==1)
  	  printf("\nEntered string is PALINDROME.\n");
	else
  	  printf("\nEntered string is not PALINDROME.\n");
return(0);
}
