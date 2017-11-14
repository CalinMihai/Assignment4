#include <stdio.h>
#include <math.h>
float a, b, c, y, d, e, x;
int n;

void fct1(float a, float b, float c, float d, int n);
void fct2(float a, float b, float c, float d, float x);

int main()
{
    printf("n=");
    scanf("%d", &n);
    printf("a,b,c,d,x= ");
    scanf("%fl%fl%fl%fl%fl", &a, &b, &c, &d, &x);;
    fct1(a, b, c, d, x);
    fct2(a, b, c, d, x);
return 0;
}

void fct1(float a, float b, float c, float d, int n)
{
    e = pow(x, 2*n);
    y = a*e + b*x*x + c*x + d;
    printf("%fl", y);
}

void fct2(float a, float b, float c, float d, float x)
{
    e = (3,14)*c;
    e = cos(e);
    y = a*x*x + b*x + e;
   printf("%fl", y);
}
