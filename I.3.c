#include <stdio.h>
#include <stdlib.h>
int x, y, z, a, b;
double c;
void sum (int x, int y, int z, int &a)
{
    a=x=y+z;
}
void prod (int x, int y, int z, int &a)
{
    a=x*y*z;
}
void avg (int x, int y, int z, double &a)
{
    a=(x+y+z)/3.0;
}
int main (){
    printf("Input the 3 numbers: ");
    scanf("%x %y %z", x, y, z);
    sum(x,y,z,a);
    prod(x,y,z,b);
    avg(x,y,z,c);
    printf("The sum is: %a\n", a);
    printf("The product is: %b\n", b);
    printf("The average is: %c\n", c);
    return 0;
}
