//
// Created by aluno on 05/03/2024.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include "filaCircular.h"

//Variáveis
int inicio = 0;
int fim = 0;
bool vazia = true;
int fila[TAMANHO];


//Protótipos
bool adicionar(int valor)
{
    if(vazia){
        vazia = false;
        fila[fim] = valor;
        fim++;
        if(fim == TAMANHO)
        {
            fim = 0;
        }
        return true;
    }

    if(estaCheia()){
        return false;
    }

    fila[fim] = valor;
    fim++;
    if(fim == TAMANHO){
        fim = 0;
    }
    return true;
}


bool retirar(int *valor)
{
    if(vazia)
    {
        return false;
    }

    *valor = fila[inicio];
    inicio++;

    if(inicio == TAMANHO){
        inicio = 0;
    }

    if(estaVazia()){
        vazia = true;
    }

    return true;
}


bool estaVazia()
{
    return fim == inicio;
}
bool estaCheia()
{
    return fim == inicio;
}
int gerarSenha()
{
    int senha;
    bool repete = false;




    if(vazia){
        return rand() % 100;
    }

    int i = inicio;


    do {
        senha = rand() % 100;

        do {
            repete = senha == fila[i];
            i++;
            if(i == TAMANHO)
            {
                i = 0;
            }
        } while(i != fim && !repete);

    } while (repete);

    return senha;
}