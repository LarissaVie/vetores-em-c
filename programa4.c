#include <stdio.h>
#include <stdlib.h>

int main(){
 float numeros[5];
 float positivos = 0;
 int i = 0;
 int negativos = 0;

 printf("insira 5 valores:\n");
 for (i = 0; i < 5; i++){
    scanf("%f", &numeros[i]);
 }

 for (i = 0; i <5; i++){
    if (numeros[i]<0){
        negativos++;
    }
    else{positivos++;
    }    
 }
 
printf("negativos: %d\n", negativos);
printf("positivos: %.2f\n", positivos);

return 0;
}