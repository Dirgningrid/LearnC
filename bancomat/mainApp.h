//
// Created by ingrid on 17/11/16.
//

#ifndef BANCOMAT_MAINAPP_H
#define BANCOMAT_MAINAPP_H

#endif //BANCOMAT_MAINAPP_H

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <elf.h>

typedef struct node {
    time_t data;
    char tipo_mov;
    int valore;
    struct node * next;
} Movimento;

typedef struct list {
    Movimento *testa;
    Movimento *coda;
} Lista;

int const MASSIMO = 10000;
int saldo = 0;
void preleva();
void versa();
void aggiungi(Lista *lista, Movimento *mov);
void estrattoconto();

Lista lista;
