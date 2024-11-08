#include <stdio.h>
#include <math.h>

//
int main ()
{
    int n,p;
    double t_serial,t_parallel, speedup, efficiency;

    for (n = 10; n <= 320; n += 10){
        for (p = 1; p <= 128; p*= 2){
            t_serial = n * n;
            t_parallel = (n * n) / p + log2(p);
            speedup = t_serial/t_parallel;
            efficiency = speedup/p;

             printf("n = %d, p = %d, Speedup = %.2f, Efficiency = %.2f\n", n, p, speedup, efficiency);
        }
    }
    
   

    return 0;

}