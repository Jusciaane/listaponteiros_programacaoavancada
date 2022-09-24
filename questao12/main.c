// Questão 12
//"Em C, uma função é vista como uma referência (ou endereço) para uma área de memória onde se encontra seu código. 
//Por isso, o identificador de uma função pode ser visto como um ponteiro. Funções podem ser acessadas usando ponteiros, 
//de forma similar às variáveis" (MAZIERO, 2019)

//Exemplo (MAZIERO, 2019)
#include <stdio.h>
#include <stdlib.h>

void inc (int *n){
(*n)++ ;
}

int main (){
void (*fp)(int*);// Ponteiro para função
fp=inc;
int x=0;
fp(&x);// chamada usando ponteiro para função
printf ("a vale %d\n", x) ;
}

//MAZIERO, Carlos. Ponteiros para funções. Material de aula. UFPR. 
//Disponível em: <http://wiki.inf.ufpr.br/maziero/doku.php?id=prog2:ponteiros_para_funcoes>.
