#include<stdio.h>

int main(void){
	unsigned long a,b,c,n,i,max=0,count;  //unsigned long

	while(scanf("%ld %ld",&a,&b)!=EOF){
		int aa=a,bb=b;
		if(a>b){
			c=a;a=b;b=c;
		}
		max=0;
		for(i=a;i<=b;i++){
			n=i;
			count=1;
			while(n>1){
				if(n%2!=0) n=3*n+1;
				else n=n/2;
				count++;
	        }	        
			if(count>max)           //max_length
				max=count;
		}
		printf("%ld %ld %ld\n",aa,bb,max);
	}
} 
