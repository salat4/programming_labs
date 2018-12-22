   #include <math.h>
   #include <stdio.h>
 
    int main(void){
        
        const int k = 40;
        const double err = 0.01;
        const double x = -0.5;
        double sum1, sum2;
        int n;
        
        double t = 1;
        double a,e;

        sum1 = 0;
        for(n = 1; n <= k; n++){
            sum1 += (pow(n,sqrt(n)) - x)/t;
	    t *= n;
        }
        printf("Sum of K = %f (K = %u)\n", sum1, k);


        sum2 = 0;
        n = 1;
        t = 1;

        do {
            a = (pow(n,sqrt(n)) - x)/t;
            sum2 += a;
            e = a/sum2;
            t *= n;
            n++;

            printf("n=%d a=%lf e=%lf\n",n,a,e);

        }while(e > err);



        return 0;
    }


