#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

	int main(void){
		unsigned int hex = 0x0;
		unsigned int p1, p2, p3;
		do
		{
			printf("p1 = ");
			scanf("%d", &p1);
		}
		while(p1 > 7);
		do
		{
			printf("p2 = ");
			scanf("%d", &p2);
		}
		while(p2 > 15);
		do
		{
			printf("p3 = ");
			scanf("%d", &p3);
		}
		while(p3 > 255);
		hex |= (p1<<13)|(p2<<8)|(p3);
		printf("Hex = %x\n", hex);

		printf("new Hex = ");
		scanf("%x", &hex);

		p1 = (hex>>13)&(0x7);
		p2 = (hex>>8)&(0xf);
		p3 = hex&(0xff);

		printf("p1 = %d\n", p1);
		printf("p2 = %d\n", p2);
		printf("p3 = %d\n", p3);



		return 0;
	}
