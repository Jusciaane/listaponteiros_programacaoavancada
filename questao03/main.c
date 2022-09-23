// Questão 03
#include <stdio.h>
#include <stdlib.h>
int main(){
//Dado no enunciado
//i e j inteiros
//p e q ponteiros para int
p = i; // Incorreto, pois para p apontar para o endereço de i deveria ser p=&i
q = &j; //Ok
p = &*&i; //Ok
i = (*&)j; //Incorreto, pois a forma correta seria (*&j)
i = *&j;//Ok
i = *&*&j;//Ok
q = *p;//Incorreto, pois o operador * recupera o conteúdo do endereço, deveria ser usado o &  para apontar o endereço.
i = (*p)++ + *q;//Ok
return 0;
}
