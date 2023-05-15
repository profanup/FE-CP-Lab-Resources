/*Expt.19:Write a C program to store the names, matches played and runs scored by "n" cricket players and generate a list of their names, with runs scored in descending order. */

#include<stdio.h>
#define num_of_players 50
struct cricketer
{
	char name[20];
	int matches,runs;
};
int main ()
{
	struct cricketer s[num_of_players],temp;
	int n,i,j;
	
	printf("\nEnter the number of cricketers in list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the player's name, matches played and runs scored:");
		scanf("%s %d %d",s[i].name,&s[i].matches,&s[i].runs);
		fflush(stdin);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].runs<s[j].runs)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}

	printf("\n\nName\tMatches\tRuns\n");
	printf("----------------------------------------\n");
	for(i=0;i<=n-1;i++)
	  printf("%s\t%d\t%d\n",s[i].name,s[i].matches,s[i].runs);

        return(0);
}
