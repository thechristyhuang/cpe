#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i;
	while(scanf("%d",&n) != EOF)
	{
		int num[3000]={0},jolly[3000]={0};
		int flag = 1;
		for(i = 1;i <= n;i++)
		{
			scanf("%d",&num[i]);
		}
		for(i = 1;i < n;i++)
		{
			jolly[abs(num[i+1]-num[i])] = 1;
		}
		for(i = 1;i < n;i++)
		{
			if(jolly[i]==0)
			{
				flag = 0;
			}
		}
		if(flag==1)printf("Jolly\n");
		else printf("Not jolly\n");
	}
}
