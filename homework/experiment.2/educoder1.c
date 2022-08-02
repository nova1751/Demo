#include<stdio.h>
#include<math.h>
int main()
{
    double pi = 0.0, sign = 1.0, term = 1.0;
    int n=1;
    while(fabs(term)>=1e-6)
    {
        pi = pi + term;
        n = n + 2;
        sign = -sign;
        term = sign / n;
    }
    pi = 4 * pi;
    printf("pi= %10.8lf", pi);
    return 0;
}
