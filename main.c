/*
Aluno: ELIVELTON BOTELHO PINHEIRO
Visual Studio Code - Ubuntu 20.04.5 LTS
*/

#include <stdio.h>
#include "cofo.h"

int main(void) {
    COFO *meuCofo;
    int tamanhoCofo;

    while(TRUE){
        printf("Digite tamanho do cofo: ");
        scanf("%d", &tamanhoCofo);
        if(tamanhoCofo < 1){
            printf("Digite um valor maior que 0\n");
        }else{
            break;
        }
    }
    meuCofo = criarCofo(tamanhoCofo);
    
    
    /*Menu*/
    int opcao = -1;
    int deuCerto;
    int item;
    while(TRUE){
        printf("\n1 - INSERIR\n");
        printf("2 - REMOVER\n");
        printf("3 - VERIFICAR\n");
        printf("4 - MOSTRE MEU COFO\n");
        printf("5 - APAGAR COFO\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: 
                printf("Insira um elemento no Cofo: ");
                scanf("%d", &item);
                deuCerto = inserirNoCofo(meuCofo, item);
                if(deuCerto){
                    printf("\nValor inserido no Cofo.");
                }else{
                    printf("\nValor nao foi inserido no Cofo.");
                }
                break;
            case 2: 
                printf("Remova um elemento do Cofo: ");
                scanf("%d", &item);
                deuCerto = removerNoCofo(meuCofo, item);
                if(deuCerto != -24042003){
                    printf("\nValor removido do Cofo.");
                }else{
                    printf("\nValor nao foi removido do Cofo.");
                }
                break;
            case 3: 
                printf("Verifique elemento no Cofo: ");
                scanf("%d", &item);
                deuCerto = verificarNoCofo(meuCofo, item);
                if(deuCerto){
                    printf("\nValor esta no Cofo.");
                }else{
                    printf("\nValor nao esta no Cofo.");
                }
                break;
            case 4:
                mostrarCofo(meuCofo);
                break;
            case 5: 
                deuCerto = deletarCofo(meuCofo);
                if(deuCerto){
                    printf("O Cofo foi excluido. Ate logo!\n");
                    return 0;
                }else{
                    printf("Nao foi possivel deletar o Cofo!\n");
                    break;
                }
            default:
                printf("Opcao Invalida");
                break;
        }
        printf("\n");
    }
}