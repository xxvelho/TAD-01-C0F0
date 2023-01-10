/*
Aluno: ELIVELTON BOTELHO PINHEIRO
Visual Studio Code - Ubuntu 20.04.5 LTS
*/

#define TRUE 1
#define FALSE 0

typedef struct _cofo_ COFO;

COFO *criarCofo(int maxItens);
int deletarCofo(COFO *cofo);
int inserirNoCofo(COFO *cofo, int item);
int verificarNoCofo(COFO *cofo, int item);
int removerNoCofo(COFO *cofo, int item);
void mostrarCofo(COFO *cofo);