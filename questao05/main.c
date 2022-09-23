// Questão 05
#include <stdio.h>
#include <stdlib.h>
int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco");
for(i = 0 ; i <= 4 ; i++){
printf("\ni = %d",i); //Saída: contador de 0 a 4
printf("vet[%d] = %.1f",i, vet[i]);//Saída: valores definidos no vet[5]: 1.1, 2.2,3.3,4.4 e 5.5
printf("*(f + %d) = %.1f",i, *(f+i));//Saída: Mesma saída anterior: 1.1, 2.2,3.3,4.4 e 5.5
printf("&vet[%d] = %X",i, &vet[i]);//Saída: Endereços: &vet[0] = 61FDF0, &vet [1] = 61FDF4, &vet[2] = 61FDF8, &vet[3] = 61FDFC, &vet[4] = 61FE00
printf("(f + %d) = %X",i, f+i);//Saída: Endereço iguais aos anteriores porque f recebeu o primeiro endereço de vet (f + 0) = 61FDF0, (f + 1) = 61FDF4, (f + 2) = 61FDF8, (f + 3) = 61FDFC, (f + 4) = 61FE00
}
return (0);
}
