#include<stdio.h>

int main(void){
	long a,b;
    long temp=0,carry=0;
	while(scanf("%ld%ld",&a,&b)!=EOF){
	while(a!=0 || b!=0){            //¤£¬O&&¬O|| 
		temp=0;carry=0;
		while(a||b){
			temp = a%10+b%10+temp;
		if(temp/=10)
			carry++;
			a=a/10;
		    b=b/10;
	}
		if(carry==0){
			printf("No carry operation.\n");
	}else if(carry==1){
		printf("%ld carry operation.\n",carry);
	}else if(carry>1){
		printf("%ld carry operations.\n",carry);
	}
	}
}
}
