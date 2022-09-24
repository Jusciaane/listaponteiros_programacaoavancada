// Questão 17
#include <stdio.h>
#include <stdlib.h>
void somavetores (int *p1, int *p2, int *p3, int n){
for (int k=0; k<n;k++){
p3[k]=p1[k]+p2[k];
}
for (int k=0;k<n;k++){
printf("%d ", p3[k]);
}
}
int main(){

int *p1, *p2, *p3;
int n, i, j, aux;
printf("\nDigite a quantidade de numeros");
scanf("%d", &n);

printf("\nDigite o primeiro vetor (a cada entrada tecle ENTER)");
p1 = (int*)calloc(n, sizeof(int));
for (i = 0; i < n; i++){
printf("%d/%d: ", i+1, n);
scanf("%d", (p1+i));
}
printf("\nDigite o segundo vetor (a cada entrada tecle ENTER)");
p2 = (int*)calloc(n, sizeof(int));
for (i = 0; i < n; i++){
printf("%d/%d: ", i+1, n);
scanf("%d", (p2+i));
}
somavetores(*p1,*p2,*p3,n);
free(p1);
free(p2);
free(p3);
}

