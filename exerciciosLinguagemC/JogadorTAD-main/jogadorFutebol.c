#include <stdio.h>
#include "jogadorFutebol.h"

//Iniciando  Programa
void iniciandoEstatistica(jogadorFutebol *jogadorBom, double codigo, int jogos, int gols, int assistencia) {
 jogadorBom->codigo = codigo;
 jogadorBom->jogos = jogos;
 jogadorBom->gols = gols;
 jogadorBom->assistencia = assistencia;
}

//Iniciando calculo pra saber se o JOGADOR é bom

void imprimir(jogadorFutebol jogador, double codigo, int jogos, int gols, int assistencia){
  //exibindo dados
  printf("> Codigo........ %f\n", jogador.codigo);
  printf("> Jogos......... %i \n", jogador.jogos);
  printf("> Gols.......... %i\n", jogador.gols);
  printf("> Assistencia... %i\n", jogador.assistencia);

  //Calculando e imprimindo 
  if (jogos > 1){
  if(gols > 2){
    if(assistencia>2){
      printf("\n->Você é um bom jogador!!!\n");
    }
  }
 }else {
   printf("\n-> Infelimente você não atingiu a marca minima,treine mais e tente mais uma vez!!!\n");
 }
}
