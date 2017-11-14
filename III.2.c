#include<stdio.h>
#include<string.h>
float R1, R2, Re;
char c;

int main()
{
    printf("Please type S if R1 and R2 are connected in series or P if R1 and R2 are connected in parallel :");
    scanf(" %c", &c);
    getchar();
    printf("Please type the values for R1, R2 : ");
     scanf("%f%f", &R1, &R2);

    if('c'=='S')
        Re = ( R1 + R2 )/2;
    else
        if('c'=='P')
           Re = R1*R2 / ( R1 + R2);

    printf("%f", Re);
}
