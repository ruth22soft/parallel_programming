#include <stdio.h>
#include <math.h>

//
int main ()
{
    int n,p;
    double t_serial,t_parallel,t_overhead, speedup, efficiency;

    //fix the number of processors
    p = 5;

    for (n = 10; n <= 320; n += 10){
        
            t_overhead = (n * n) + n;
            t_serial = n * n;
            t_parallel = t_serial / p + t_overhead;
            speedup = t_serial/t_parallel;
            efficiency = speedup/p;

             printf("n = %d, p = %d, Serial time = %.2f, overhead time = %.2f, Speedup = %.2f, Efficiency = %.2f\n", n, p, t_serial,t_overhead ,speedup, efficiency);
        
    }
    
   

    return 0;

}