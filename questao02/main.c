// Questão 02
#include <stdio.h>
#include <stdlib.h>
int main(){
//Dado no enunciado
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4); //61fe1c 7 5 15 9
return 0;
}
