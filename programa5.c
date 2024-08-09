#include <stdio.h>
#include <stdlib.h>

int main(){
 int valores[5];
 int soma;
 float media;

 for (int i = 0; i <5; i++){
    scanf("%d", &valores[i]);
    soma += valores[i];
 }
 
 media = soma | 5;

 for (int i = 0; i <5; i++){
    printf("%d\n", valores[i]);
    printf("%.2f\n", media);
 }
 


return 0;
}