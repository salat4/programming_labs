#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
	const int a=1;
	const int b=2;
	const int c=4;
	double  y=0,i;
	double d=(5- -5)/21.0;
	for (i= -5 ; i <=5; i+=d)
		{ 
		if (i < -2 ) 
			{ y=sin (a * M_PI* cos (M_PI*i/3))-1;}
			
		
		else  if ( i < 2 )
			y=(c/a*(pow(i,b/2*a))+c)*(log(fabs((i*i+b*b)/(2*c))))+sin((M_PI*i)/a*c);
		else	
			y=(sin(M_PI*i/a*c)-cos(M_PI*b/i))/pow(a+b,i-a);
			
			printf("%lf \t %lf\n",i,y);
		}

		return (0);
}
	