#include<stdio.h>
#include<math.h>
#define s(a,b,c) (a+b+c)
#define area(a,b,c) sqrt((a+b+c)/2*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c)) 
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    printf("面积是%f 周长是%f", area(a, b, c), s(a, b, c));
    return 0;
}