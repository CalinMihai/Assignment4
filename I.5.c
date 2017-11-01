#include <stdio.h>
#include <stdlib.h>
int i;
int main(){
    for(i = 2; i<= 58; i++){
        printf("%d, ", i);
        i += 1;
    }
    printf("%d.", 60);
    return 0;
}
