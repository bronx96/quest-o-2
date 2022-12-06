typedef int TipoChave;

typedef struct{
  TipoChave Chave;
}TipoItem;
typedef struct Celula *Apontador;

typedef struct Celula{
TipoItem item;
Apontador Prox;
}Celula;

typedef struct{ 
Apontador Frente, Tras;
int Tamanho;
}TipoFila;

TipoFila* InicializaFila();
void FFVazia(TipoFila *Pilha);
int Vazia (TipoFila* Fila);
void Enfileira(TipoItem x, TipoFila *Fila);
TipoItem Desemfileira(TipoFila *Fila);
void Imprime (TipoFila* Fila);
void TamanhoF (TipoFila* Fila);