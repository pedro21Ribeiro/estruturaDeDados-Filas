//
// Created by aluno on 05/03/2024.
//

#ifndef UNTITLED_FILACIRCULAR_H
#define UNTITLED_FILACIRCULAR_H

#include <stdbool.h>
#include <stdio.h>

//Constantes
enum {
        TAMANHO = 5,
};

//Variávis
extern int inicio;
extern int fim;
extern bool vazia;
extern int fila[TAMANHO];

//Protótipos

bool adicionar(int valor);
bool retirar(int *valor);
bool estaVazia();
bool estaCheia();
int gerarSenha();


#endif //UNTITLED_FILACIRCULAR_H
