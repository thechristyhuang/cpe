#include<stdio.h>
#include<string.h>

int main(void)
{
	int n, i, j;
	char str[1000];
	while(scanf("%d\n",&n) != EOF)
	{
		int a[26]={0}, total=0;
		for(i = 0;i < n;i++)
		{
			gets(str);
			for(j = 0;j < strlen(str); j++)
			{
				if(str[j] >= 'a' && str[j] <= 'z')
				{
					a[str[j]-'a']++;
					total++;
				}else 
				if(str[j] >= 'A' && str[j] <= 'Z')
				{
					a[str[j]-'A']++;
					total++;						   					       
				} 
			}
		}
		for(i = total;i >= 1; i--)
		{
			for(j = 0;j < 26; j++)
			{
				if(a[j]==i)
				printf("%c %d\n",j+'A',i);
			}
		}
	}
}
