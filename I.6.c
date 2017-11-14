#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cateta1, cateta2;
double hypotenuse1, *hypotenuse2;
int main(){
    scanf("%d%d", &cateta1, &cateta2);
hypotenuse1 = sqrt(cateta1 * cateta1 + cateta2 * cateta2);
    printf("%fl", hypotenuse1);
int *cat1 = &cateta1;
int *cat2 = &cateta2;
*hypotenuse2 = sqrt(*cat1 * *cat1 + *cat2 * *cat2);
    printf("%fl", &hypotenuse2);
}
