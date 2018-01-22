#include <stdio.h>
#include <stdlib.h>

int main(int argv, char **argc)
{
	int a, b, n;
	n = atoi(argc[1]);
	printf("The number is: %d\n", n);
	for(b = 0; b <= n; b++)
	{
		for(a=0; a <= b; a++)
		{
	        if (b == a * a && b == a * (a+1)/2)
        	{
				printf(" %d is a square and triangular number. \n",b);
        	}
    		else if (b == a*a && b != (a+1)/2)
			{
				printf(" %d is a square number. \n", b);
			}
			else if (b != a*a && b == a*(a+1)/2)
			{
				printf(" %d is a triangular number. \n", b);
			}
		}
	}

	return 0;
}

