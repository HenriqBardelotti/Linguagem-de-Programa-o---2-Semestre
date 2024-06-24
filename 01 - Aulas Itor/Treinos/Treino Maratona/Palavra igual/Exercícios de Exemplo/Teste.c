#include <stdio.h>
#include <stdlib.h>

typedef struct Matriz {
  int linhas;
  int colunas;
  int **dados;
} Matriz;

int compararCelulas(const int *a, const int *b) {
  return *a - *b;
}

int getElementoMatriz(Matriz *matriz, int linha, int coluna) {
  if (linha < 0 || linha >= matriz->linhas || coluna < 0 || coluna >= matriz->colunas) {
    return -1; // Erro: índice fora dos limites
  }
  return matriz->dados[linha][coluna];
}

void setElementoMatriz(Matriz *matriz, int linha, int coluna, int valor) {
  if (linha < 0 || linha >= matriz->linhas || coluna < 0 || coluna >= matriz->colunas) {
    return; // Erro: índice fora dos limites
  }
  matriz->dados[linha][coluna] = valor;
}

void trocarElementosMatriz(Matriz *matriz, int i, int j, int colunaPivo) {
  int temp = getElementoMatriz(matriz, i, colunaPivo);
  setElementoMatriz(matriz, i, colunaPivo, getElementoMatriz(matriz, j, colunaPivo));
  setElementoMatriz(matriz, j, colunaPivo, temp);
}

int particionarMatriz(Matriz *matriz, int low, int high, int colunaPivo) {
  int pivot = getElementoMatriz(matriz, high, colunaPivo);
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (getElementoMatriz(matriz, j, colunaPivo) <= pivot) {
      i++;
      trocarElementosMatriz(matriz, i, j, colunaPivo);
    }
  }

  trocarElementosMatriz(matriz, i + 1, high, colunaPivo);
  return i + 1;
}

void quicksortMatriz(Matriz *matriz, int low, int high, int colunaPivo) {
  if (low < high) {
    int pivot = particionarMatriz(matriz, low, high, colunaPivo);
    quicksortMatriz(matriz, low, pivot - 1, colunaPivo);
    quicksortMatriz(matriz, pivot + 1, high, colunaPivo);
  }
}

int main() {
  int linhas = 3;
  int colunas = 2;

  Matriz matriz;
  matriz.linhas = linhas;
  matriz.colunas = colunas;

  // Alocação dinâmica da matriz
  matriz.dados = (int **)malloc(linhas * sizeof(int *));
  for (int i = 0; i < linhas; i++) {
    matriz.dados[i] = (int *)malloc(colunas * sizeof(int));
  }

  // Preenchendo a matriz com dados
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      matriz.dados[i][j] = rand() % 100;
    }
  }

  // Imprimindo a matriz original
  printf("Matriz original:\n");
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", getElementoMatriz(&matriz, i, j));
    }
    printf("\n");
  }

  // Ordenando cada coluna da matriz
  for (int j = 0; j < colunas; j++) {
    quicksortMatriz(&matriz, 0, linhas - 1, j);
  }

  // Imprimindo a matriz ordenada
  printf("\nMatriz ordenada:\n");
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", getElementoMatriz(&matriz, i, j));
    }
    printf("\n");
  }

  // Liberando memória alocada
  for (int i = 0; i < linhas; i++) {
    free(matriz.dados[i]);
  }
  free(matriz.dados);

  return 0;
}
