#include <iostream>
#include "fila.h"
#include <cstdlib>

using namespace std;

TipoFila* InicializaFila(){
  TipoFila* Fila = (TipoFila*)malloc(sizeof(TipoFila));
  Fila->Tamanho = 0;
  return Fila;
}
void FFVazia(TipoFila *Fila){
  Fila->Frente = (Apontador) malloc(sizeof(Celula));
  Fila->Tras = Fila->Frente;
  Fila->Frente->Prox = NULL;
  Fila->Tamanho = 0;
}

int Vazia (TipoFila* Fila){
  return (Fila->Frente == Fila->Tras);
}

void Enfileira(TipoItem x, TipoFila *Fila){
  Fila->Tras->Prox = (Apontador) malloc(sizeof(Celula));
  Fila->Tras = Fila->Tras->Prox;
  Fila->Tras->item = x;
  Fila->Tras->Prox = NULL;
  Fila->Tamanho++;
}
TipoItem Desemfileira(TipoFila *Fila){
  Apontador q;
  if(Vazia(Fila)){
    TipoItem x;
    printf("Erro:Fila Vazia\n");
    x.Chave = NULL;
    return x;
  }
  else{
    q = Fila->Frente;
    Fila->Frente = Fila->Frente->Prox;
    free(q);
    Fila->Tamanho--;
    return Fila->Frente->item;
  }
}
void TamanhoF (TipoFila* Fila){
  cout<<"A fila tem "<< Fila->Tamanho<<" elementos"<< endl;
}