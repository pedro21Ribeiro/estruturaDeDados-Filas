#include <stdio.h>
#include "filaCircular.h"
#include <time.h>
#include <stdlib.h>

/*
 * Participantes: Mariane Oliveira dos Santos, Pedro Silva Ribeiro, Rafael Nascimento da Silva
 */



//constantes
enum {
    OP_ADICIONAR = 1,
    OP_CHAMAR,
    OP_SAIR,
};

int main() {
    srand(time( NULL));


    int opcao;
    int senha;
    opcao = 0;

    while(opcao!=3){
        printf("\n____----____---- BANCO COMMIT ----____----____\n");
        printf("%d -| Gerar Senha\n", OP_ADICIONAR);
        printf("%d -| Chamar Senha\n", OP_CHAMAR);
        printf("%d -| Sair\n", OP_SAIR);
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);

        senha = 9999;
        switch (opcao) {
            case OP_ADICIONAR:
                senha = gerarSenha();
                if(adicionar(senha)){
                    printf("Senha numero %d adicionada a fila\n", senha);
                }else{
                    printf("Fila do banco cheia, favor liberar espaco\n");
                }
                break;

            case OP_CHAMAR:
                if(retirar(&senha)){
                    printf("Senha numero %d favor comparecer ao caixa\n", senha);
                }else{
                    printf("Fila do banco vazia, favor gerar senha\n");
                }
                break;

            case OP_SAIR:
                printf("Todos clientes favor retirem-se da agencia, estamos fechando");
                break;
            default:
                printf("OPCAO INVALIDA!!!\n");
        }
    }
}
