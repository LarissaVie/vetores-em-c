#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x[10];
    int i = 0;

    printf("diga 10 valores:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }


int maior= x[0];
int menor = x[0];

for(i = 0; i < 10; i++){
  if (x[i] > maior){
    maior = x[i];
    }
    if (x[i] < menor){
        menor = x[i];
    }    
}
  
printf("O maior do vetor e:%d\n", maior);
printf("O menor do vetor e:%d\n", menor);

return 0;
}