#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argv, char **argc)
{
	int a;	
	double n, d, b, c;
    n = atof(argc[1]);
	printf("The number is: %f\n", n);
    for(a = 0; a <= n; a++)
    {
		if (a*a	< n && (a+1)*(a+1)>n)
		{
			b=(double)a;
			c=((double)a)+1;
			d= (c+b)/2;
			printf("b=%f , c = %f, d=%f\n", b,c,d);
			break;
		}
		else if( a*a ==n)
		{
			double root;
			root = (double)a;
			printf("the square root is %f\n", root);
			exit(0);
		}
	}
	double fg = d;
	printf("the first guess = %f\n", fg);
	while(fabs((fg*fg) -n) > 0.00005)
	{
		if(fg*fg >= n)
		{
			fg = fg - 0.00001;
		}
		else if(fg*fg < n)
		{
			fg = fg + 0.00001;
		}
	}	
	
	printf("the square root is %f\n", fg);
	
return 0;


}

