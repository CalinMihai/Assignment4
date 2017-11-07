#include <stdio.h>
#include <stdlib.h>
int a, b;
void swap (int &x, int &y)
{
    int t=x;
    x=y;
    y=t;
}

int main () {
   scanf("%d%d", &a,&b);
   printf("Before swap, value of a: %d\n", a);
   printf("Before swap, value of b: %d\n", b);
   swap(a,b);
   printf("After swap, value of a: %d\n", a);
   printf("After swap, value of b: %d\n", b);
   return 0;
}
