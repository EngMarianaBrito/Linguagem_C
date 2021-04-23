#include <stdio.h>

/*Escreva um método que receba um vetor de inteiros e retorne o maior elemento e o menor elemento.
Observe que o método deve retornar ao local da chamada os dois valores (não imprimir ao usuário). (0,5
ponto)
*/

int main(void) {
  int vetor[3],maior,menor;
  
  //Colhendo os valores
  printf("Informe os valores e veja a mágica!\n");
  for (int i=1; i<=3; i++){
    scanf("%d",&vetor[i]);
  }
  //Inicializando o variavel e calculando qual é o maior
  maior = vetor[0];
  for (int i=1; i<=3; i++){
    if(vetor[i] > maior) {
        maior = vetor[i]; 
    }
  }
  //Inicializando o variavel e calculando qual é o menor
  menor = vetor[0];
  for (int i=1; i<=3; i++){
    if(vetor[i] < menor) {
        menor = vetor[i]; 
    }
  }
}