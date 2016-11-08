#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dfs(int lev,int book[])
{
	if(lev==5)
	{
		int i;
		for(i=1;i<=9;++i)
		  if(book[i]==2)
		    return 1;
		return 0;
	}

	int i;
	for(i=1;i<=7;++i)
	{
		if(book[i]>0&&book[i+1]>0&&book[i+2]>0)
		{
			book[i]--;book[i+1]--;book[i+2]--;
			if(dfs(lev+1,book))return 1;
			book[i]++;book[i+1]++;book[i+2]++;
		}
	}

	for(i=1;i<=9;++i)
	{
		if(book[i]>=3)
		{
			book[i]-=3;
			if(dfs(lev+1,book))return 1;
			book[i]+=3;
		}
	}
	return 0;
}

int main()
{
	char s[100];
	int book[10],i,j;
	scanf("%s",s);

	while(strlen(s)!=14)
	{
		printf("Invalid Input, enter again: ");
		scanf("%s",s);
	}
	for(i=1;i<=9;++i)book[i]=0;
	for(i=0;i<14;++i)book[s[i]-'0']++;
	printf("tong:\n" );
	for(i=1;i<=9;++i)
	  for(j=1;j<=book[i];++j)
	    printf("%d",i);
	printf("\n");

	if(dfs(1,book))printf("You win\n");
	else printf("Not win\n");

	return 0;


}
