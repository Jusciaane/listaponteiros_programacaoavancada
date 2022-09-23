// Questão 11
#include <stdio.h>
#include <stdlib.h>
int main(){
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
//////////////
aloha[2] = value;// Válido.
scanf("%f", &aloha); // Válido.
aloha = value"; // Inválido, pois o ponteiro aloha não pode receber o value (inteiro)
printf("%f", aloha);// Válido.
coisas[4][4] = aloha[3];// Válido.
coisas[5] = aloha;// Inválido, pois coisa só pode receber valor e não endereço..
pf = value;// Inválido, pois como pf é ponteiro a atribuição não pode ser para receber um valor.
pf = aloha; // Válido.
return (0);
}
