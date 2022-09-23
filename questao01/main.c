// Questão 01
#include <stdio.h>
#include <stdlib.h>
int main(){
// Dado no enunciado
int i=3, j=5;
int *p, *q;
p=&i;
q=&j;
// Saída das expressões
printf("p==&i: %d\n", p==&i); //1
printf("*p-*q: %d\n", (*p-*q)); //-4
printf("**&p: %d\n", (**&p)); //3
printf("3-*p/(*q)+7: %d\n",(3-*p/(*q)+7)); //10
return 0;
}
