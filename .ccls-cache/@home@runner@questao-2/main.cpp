#include <iostream>
#include "fila.h"

using namespace std;

int main() {

  //filas
  TipoFila* entrada;
  entrada = InicializaFila();
  FFVazia(entrada);

  
  TipoFila* par;
  par = InicializaFila();
  FFVazia(par);
  TipoFila* impar;
  impar = InicializaFila();
  FFVazia(impar);
  
  TipoFila* saida;
  saida = InicializaFila();
  FFVazia(saida);
  
  //variaveis de apoio
  TipoItem x;
  int s;

  //recebendo as entradas
  while(s != 0){
    cout << "digite um numero positivo ou negativo ou 0 para terminar" << endl;
    cin >> s;
    x.Chave = s;
    Enfileira(x, entrada);
  }
  
  //dividindo pares de impares
  while(entrada->Tamanho != 0){
    x = Desemfileira(entrada);
    if(x.Chave% 2 == 0){
      Enfileira(x, par);
      }
    else{
      Enfileira(x, impar);
    }
  }
  // selecionando pares e impares para saida
  while(impar->Tamanho > 0){
    //checando se o item de par é positivo ou negativo
    s = Desemfileira(par).Chave;
    if (s < 0 && saida->Tamanho > 0){
      s = Desemfileira(saida).Chave;
    }
    else{
      x.Chave = s;
      Enfileira(x, saida);
    }
    // checando se o numero impar é positivo
    s = Desemfileira(impar).Chave;
    if (s < 0 && saida->Tamanho > 0){
      s = Desemfileira(saida).Chave;
    }
    else{
      x.Chave = s;
      Enfileira(x, saida);
    }
    
  }
  while(saida->Tamanho > 0)
  cout << Desemfileira(saida).Chave;
}