#include<stdio.h>
#include<stdlib.h>

int main(void){
    long long a,b,subtract=0;
	while(scanf("%lld%lld",&a,&b)!=EOF){
		if(a>b){                      //¤£¯à¥Îabs 
			subtract=a-b;
		}else{
			subtract=b-a;
		}
			printf("%lld\n",subtract);
		
	} 
}
