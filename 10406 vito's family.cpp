#include<stdio.h>
#include<stdlib.h>

int compare(const void*a,const void*b){
	return (*(int*)a-*(int*)b);
}
int main(void){
	
	int r, s[505]={0}, i, T, j, street, middle, k,sum;
	
	scanf("%d",&T);

	for(i=1;i<=T;i++){
		scanf("%d",&r);
		for(j=0;j<r;j++){
			scanf("%d",&s[j]);
		}
		qsort(s,r,sizeof(s[0]),compare);
		middle = s[r/2];
		sum=0;
		for(k=0;k<r;k++){
			sum+=abs(middle-s[k]);
		}
		printf("%d\n",sum);
	}
} 
