//Questão 08
// programa 1
//Cria o vetor do tipo inteiro com os seguintes valores: 4, 9 e 13 e em seguida imprime seguindo a ordem da posição (i) cada um dos valores.
int main(){
int vet[] = {4,9,13};
int i;
for(i=0;i<3;i++){
printf("%d ",*(vet+i));
}
}
//programa 2
//Idem programa 1, no entanto ao invés de imprimir os valores a impressão é do endereço em hexadecimal de cada uma das 3 posições.
int main(){
int vet[] = {4,9,13};
int i;
for(i=0;i<3;i++){
printf("%X ",vet+i);
}
}
