#include <stdio.h>
#include <stdlib.h>
int x, y, z, a, b;
double c;
void sum (int x, int y, int z, int *a)
{
    *a = x + y + z;
}
void prod (int x, int y, int z, int *b)
{
    *b = x * y * z;
}
void avg (int x, int y, int z, double *c)
{
    *c = (x+y+z) /3.0;
}
int main (){
    printf("Input the 3 numbers: ");
    scanf("%d%d%d", &x,&y,&z);
        sum(x,y,z,&a);
        prod(x,y,z,&b);
        avg(x,y,z,&c);
    printf("The sum is: %d\n", a);
    printf("The product is: %d\n", b);
    printf("The average is: %lf\n", c);
    return 0;
}
