// Questão 10
#include <stdio.h>
#include <stdlib.h>
int main(){
//Declaração de vetores dos tipos analisados e impressão para cada caso
char vetchar[4]={10,20,30,40};
printf("Caso 1: char %d %d %d %d \n", vetchar, vetchar+1, vetchar+2,vetchar+3); //Saída: Caso 1: char 6422044 6422045 6422046 6422047

int vetint[4]={10,20,30,40};
printf("Caso 2: int %d %d %d %d \n", vetint, vetint+1, vetint+2,vetint+3); //Saída: Caso 2: int 6422016 6422020 6422024 6422028

float vetfloat[4]={10.5,20.5,30.5,40.5};
printf("Caso 3: float %d %d %d %d \n", vetfloat, vetfloat+1, vetfloat+2,vetfloat+3); //Saída: Caso 3: float 6422000 6422004 6422008 6422012

double vetdouble[4]={10.5,20.5,30.5,40.5};
printf("Caso 4: double %d %d %d %d \n", vetdouble, vetdouble+1, vetdouble+2,vetdouble+3); //Saída: Caso 4: double 6421968 6421976 6421984 6421992

return (0);
}
