/*
Aluno: ELIVELTON BOTELHO PINHEIRO
Visual Studio Code - Ubuntu 20.04.5 LTS
*/

#include <stdio.h>
#include <stdlib.h>
#include "cofo.h"

typedef struct _cofo_{
  int maxItens;
  int numItens;
  int *itens;
}COFO;

COFO *criarCofo(int maxItens){
  COFO *cofo;
  if(maxItens > 0){
    cofo = (COFO*)malloc(sizeof(COFO));
    if(cofo != NULL){
      cofo->itens = (int *)malloc(sizeof(int) * maxItens);
      if(cofo->itens != NULL){
        cofo->maxItens = maxItens;
        cofo->numItens = 0;
        return cofo;
      }
      free(cofo);
    }
  }
  return NULL;
}

int deletarCofo(COFO *cofo){
  if(cofo != NULL){
    if(cofo->numItens == 0){
      free(cofo->itens);
      free(cofo);
      return TRUE;
    }
  }
  return FALSE;
}


int inserirNoCofo(COFO *cofo, int item){
  if(cofo != NULL){
    if(cofo->numItens < cofo->maxItens){
      cofo->itens[cofo->numItens] = item;
      cofo->numItens++;
      return TRUE;
    }
  }
  return FALSE;
}

int verificarNoCofo(COFO *cofo, int item){
  if(cofo != NULL){
    if(cofo->numItens > 0){
      int i = 0;
      while (i < cofo->numItens){
        if(cofo->itens[i] == item){
          return TRUE;
        }
        i++;
      }
    }
  }
  return FALSE;
}

int removerNoCofo(COFO *cofo, int item){
  int i, status = FALSE, aux = -24042003;
  if(cofo != NULL){
    if(cofo->numItens > 0){
      for(i=0; i < cofo->numItens; i++){
        if(cofo->itens[i] == item){
          status = TRUE;
          break;
        }
      }
      if(status == TRUE){
        aux = cofo->itens[i];
        for(int j=i; j < cofo->numItens-1; j++) {
          cofo->itens[j] = cofo->itens[j+1];
        }
        cofo->numItens--;
        return aux;
      }
    }
  }
  return -24042003;
}

void mostrarCofo(COFO *cofo){
  printf("[ ");
  for(int i=0; i < cofo->numItens; i++){
    printf("%d ", cofo->itens[i]);
  }
  printf("]\n");
}