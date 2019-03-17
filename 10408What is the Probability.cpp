#include<stdio.h>
#include<math.h>

int main(void)
{
	int Case, n, k;
	double p;
	scanf("%d",&Case);
	while(Case-->0)
	{
		scanf("%d %lf %d",&n,&p,&k);
		if(p==0.0)
		{
			printf("0.0000\n");
			continue;
		}
		if(k==1)
			printf("%.4f\n",p/(1-pow(1-p,n)));
		else
		    printf("%.4f\n",p*pow(1-p,k-1)/(1-pow(1-p,n)));	
	}
}
