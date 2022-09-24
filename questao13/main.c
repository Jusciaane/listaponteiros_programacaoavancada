// Questão 13
#include <stdio.h>
#include <stdlib.h>
int main(){
int *p;
int n, i, j, aux;
printf("\nDigite a quantidade de numeros (a cada entrada tecle ENTER)");
scanf("%d", &n);
p = (int*)calloc(n, sizeof(int));
for (i = 0; i < n; i++){
printf("%d/%d: ", i+1, n);
scanf("%d", (p+i));
}
for (i = 0; i < n-1; i++){
    for (j = i+1; j < n; j++){
        if (p[i] > p[j]){
            aux = p[i];
            p[i] = p[j];
            p[j] = aux;
        }
    }
}
for (i = 0; i < n; i++){
    printf("%d ", p[i]);
}
printf("\n");
free(p);
}
//Fonte: https://pt.stackoverflow.com/questions/153094/m%C3%A9todo-de-ordena%C3%A7%C3%A3o-bubblesort-com-aloca%C3%A7%C3%A3o-din%C3%A2mica-ponteiro
