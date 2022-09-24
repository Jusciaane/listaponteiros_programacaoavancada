// Questão 04
#include <stdio.h>
#include <stdlib.h>
int main(){
int valor;
int *p1;
float temp;
float *p2;
char aux;
char *nome = "Ponteiros";
char *p3;
int idade;
int vetor[3];
int *p4;
int *p5;
/* (a) */
valor = 10;
p1 = &valor;
*p1 = 20;
printf("%d \n", valor); //Saída: 20. Pois, p1 recebeu o endereço de valor e em *p1 (valor) foi armazenado 20.
/* (b) */
temp = 26.5;
p2 = &temp;
*p2 = 29.0;
printf("%.1f \n", temp); //Saída: 29.0. Pois, p2 recebeu o endereço de temp e em *p2 (temp) foi armazenado 29.0.

/* (c) */
p3 = &nome[0];
aux = *p3;
printf("%c \n", aux);//Saída: p. Pois, p3 recebeu o endereço de nome na posição 0 e aux recebeu o valor de *p3[0].

/* (d) */
p3 = &nome[4];
aux = *p3;
printf("%c \n", aux);//Saída: e. Pois, p3 recebeu o endereço de nome na posição 5 e aux recebeu o valor de *p3[0].
/* (e) */
p3 = nome;
printf("%c \n", *p3);// Saída: p. Pois, p3 recebeu nome[0] e é impresso o valor nessa posição.
/* (f) */
p3 = p3 + 4;
printf("%c \n", *p3);//Saída: e. Pois, é impresso p3 deslocado 4 posições a frente.
/* (g) */
p3--;
printf("%c \n", *p3);//Saída: t. Pois, é impresso p3 deslocado 1 posição anterior.
/* (h) */
vetor[0] = 31;
vetor[1] = 45;
vetor[2] = 27;
p4 = vetor;
idade = *p4;
printf("%d \n", idade);//Saída:31. Pois, idade recebeu o valor na posição 0 de p4.
/* (i) */
p5 = p4 + 1;
idade = *p5;
printf("%d \n", idade);//Saída:45. Pois, idade recebeu o valor na posição 0 de p5, sendo que o valor de p5 é 45, pois é p4[0] +1 posição a frente. 
/* (j) */
p4 = p5 + 1;
idade = *p4;
printf("%d \n", idade);//Saída:27. Pois, idade recebeu o valor na posição 0 de p4, sendo que o valor de p4 é 27, pois é p5[1] +1 posição a frente.
/* (l) */
p4 = p4 - 2;
idade = *p4;
printf("%d \n", idade);//Saída:31. Pois, idade recebeu o valor na posição 2 de p4, sendo que o valor de p4 é 31, pois é p4[2] -2 posições anteriores.
/* (m) */
p5 = &vetor[2] - 1;
printf("%d \n", *p5);//Saída: 45. Pois, p5 recebe o valor da segunda posição.
/* (n) */
p5++;
printf("%d \n", *p5);// Saída: 27. Pois, p5 estava na posição 1, mais uma posição a frente ele passa p5[2]=27.
return(0);
}
