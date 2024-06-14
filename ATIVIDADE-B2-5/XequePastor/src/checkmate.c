#include <stdio.h>
#include "board.h"
#include "move.h"
#include "display.h"
#include "checkmate.h"

void xequePastor(char tabuleiro[MAXLIN][MAXCOL][4]) {
    char *mov[7] = {"e4", "e5", "Bc4", "Cc6", "Dh5", "Cf6", "f7"};
    int jogadasOrigem[7][2] = {{6, 4}, {1, 4}, {7, 5}, {0, 1}, {7, 3}, {0, 6}, {3, 7}};
    int jogadasDestino[7][2] = {{4, 4}, {3, 4}, {4, 2}, {2, 2}, {3, 7}, {2, 5}, {1, 5}};
    int numJogada = 0;
    int tam = sizeof(jogadasOrigem) / sizeof(jogadasOrigem[0]);
    for (int i = 0; i < tam; i++) {
        if (i % 2 == 0) {
            numJogada++;
            printf("=========================================\n");
            if (numJogada == 4)
                printf("          Jogada #%i (Xeque Mate)\n", numJogada);
            else
                printf("                Jogada #%i\n", numJogada);
            printf("=========================================\n\n");
            if (i == 6)
                printf("--- Brancas capturam Peao PP6 em %s e Xeque MATE (Dxf7#)---\n", mov[i]);
            else
                printf("------------ Brancas jogam %s ------------\n", mov[i]);
        } else {
            printf("------------ Pretas jogam %s ------------\n", mov[i]);
        }
        jogada(jogadasOrigem[i], jogadasDestino[i], tabuleiro);
        exibirTabuleiro(tabuleiro);
    }
}
