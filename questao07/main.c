// Questão 07 
#include <stdio.h>
#include <stdlib.h>

int main (){

int mat[4], *p, x;
p = mat + 1; //Válido
p = mat++;//Inválido, pois não é possível, por meio dessa sentença, deslocar o endereço de mat.
p = ++mat;//Inválido, pois não é possível, por meio dessa sentença, deslocar o endereço de mat.
x = (*mat)++;//Válido

return (0);
}
