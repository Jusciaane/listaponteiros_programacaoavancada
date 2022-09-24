// Questão 14
#include <stdio.h>
#include <stdlib.h>
//Função para comparar valores do vetor
int comparador(const void *a, const void *b) {
return (*(int*)a - *(int*)b );
}
int main () {
//Vetor para ordenar
int i, val[] = {2,1,8,3};

//ordena o vetor
qsort(val, 5, sizeof(int), comparador);

//imprime os valores do vetor ordenado
for( i = 0 ; i < 5; i++ ){
    printf("%i ", val[i]);
}
return(0);
}
//Fonte:https://www.galirows.com.br/meublog/programacao/utilizacao-funcao-qsort/
