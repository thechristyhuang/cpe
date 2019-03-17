#include <stdio.h>

int main(void){
	int N, i, j, Fibo[42]={0}, number, original_number, Fnumber[40]={0},m=0;
    
    //°µfibonacciªí 
	Fibo[0] = 1; Fibo[1] = 2;
	for ( i = 2; i < 42; i++){
		Fibo[i] = Fibo[i-1]+Fibo[i-2];
        }
	scanf("%d", &N);
	for( i = 1; i <= N; i++ ){
		scanf("%d", &number);
		original_number = number;
		 
	    for(j=39;j>=0;j--)
	    {
	    	if(number>=Fibo[j])          // =
	    	{
	    		number=number-Fibo[j];
	    		Fnumber[j]=1;     //
			}
			else
			{
				Fnumber[j]=0;     //
			}
		}
		printf("%d = ", original_number);
		
		for(j=39;j>=0;j--)
		{
			if(Fnumber[j]==1)
			{
				m=j;
				break;        //
			}
		}
		for(j = m;j >= 0; j-- ){
			printf("%d",Fnumber[j]);		
		}
		
		printf(" (fib)\n");
	}
	return 0;
}
