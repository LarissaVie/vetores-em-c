#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10];
    int i, cont_pares = 0;

    printf("diga 10 numeros inteiros:\n");
    for (i = 0; i <10; i++){
      scanf("%d", &a[i]);
    }

    for (i = 0; i <10; i++){
      if (a[i] %2 == 0){
        cont_pares++;
      }
    }

    printf("quantidade dos valores pares: %d\n", cont_pares);

return 0;

}