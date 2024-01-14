#include <stdio.h>

/*
Computing the Fibonacci Sequence iteration mehod
*/

int main()
{
	
	int term1 = 0;
	int term2 = 1;
	int fibn = 0;
	int length = 0;
	
	do
	{
		printf("Enter sequence length: ");
		scanf("%d",&length);
		if (length < 3)
			printf("length must greater or equal to 3");
	} while (length < 3);
	
	
	printf("iterative solution\n");
	printf("%d,%d,", term1, term2);
	for (int i = 2; i < length; i++) 
	{
		fibn = term1 + term2;
		printf("%d", fibn);
		
		term1 = term2;
		term2 = fibn;

		if ( i!= (length - 1 )	) printf(",");
		else printf("\n");



	}


	return 0;
}

int fib(int n)