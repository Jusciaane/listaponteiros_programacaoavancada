// Questão 02
#include <stdio.h>
#include <stdlib.h>
int main(){
//Dado no enunciado
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
//saídas: 61fe1c 7 5 15 9
//61fe1c: endereço em base hexadecimal
//7: valor de i(5)+2
//5: recupera o conteúdo do endereço de p
//15: conteúdo de p multiplicado por 3
//9: recupera o conteúdo do endereço de p e soma mais 4
return 0;
}
