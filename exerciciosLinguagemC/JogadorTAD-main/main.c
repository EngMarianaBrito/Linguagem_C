//Implemente um TAD Jogador de Futebol 
//  •Cada jogador possui os campos codigo, jogos, gols e assistências.
//  •Implemente as operações:
//Atribui: atribui valores para os campos.
//Imprime: imprime os dados/estatísticas do jogador.
//EhBom: testa se o jogador é bom!!! (defina seu próprio critério de bom jogador)#include <stdio.h>
#include "jogadorFutebol.h"

int main(void) {
  printf("=============================\n");
  printf("\tSistema Bom Jogador\n");
  printf("=============================\n");
  jogadorFutebol jogador1;
  iniciandoEstatistica(&jogador1, 555556, 3, 6, 10);
  imprimir(jogador1);
  printf("============================\n");
  jogadorFutebol jogador2;
  iniciandoEstatistica(&jogador2, 999996, 1, 0, 0);
  imprimir(jogador2);
}
  