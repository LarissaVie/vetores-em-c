#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[6] = {1, 0, -2, -5, 7};
    int soma = a[0] + a[1] + a[5];

    printf("as somas dos valores serão:%d\n", soma);

    a[4] = 100;

    printf("valores do array a:\n");
    for(int i = 0; i<6; i++){
        printf("a[%d]=%d\n", i, a[i]);
    }
return 0;    
}