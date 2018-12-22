#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h> 
#include <math.h>  

double fun2(double a, double b)
{
	double res;
	if (a > 0)
	{
		res = (log(sin(abs(a))) + 5 * sqrt(abs(a + b))) / (1 - a * a * a * a);
	}
	else
	{	
		res = (4 * a + 3 * b) / (a * a - b);
	}
	return (res);
}

double fun(double x, double y)
{
	double s;
	double s1, s2, s3, s4;
	s1 = fun2(y + 1, 4 * x + 3 * y);
	s2 = fun2((5 * x - 2) / (4 * x + 3 * y), x / 4);
	s3 = fun2(pow(x, 1/3) + sqrt(y), x / y);
	s4 = fun2(sqrt(x - y), (2 * x + 3) / (3 * y + 1));
	s = (s1 - s2) / (s4 - s4);
	printf("%.4lf  %.4lf\n", s4, s);

	return(s);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	double sum;
	sum = fun(1, 1);
	printf("Сума = %.4lf\n", sum);
	system("pause");
	return (0);
}
