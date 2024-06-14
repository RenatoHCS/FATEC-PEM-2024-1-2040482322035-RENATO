#include <stdio.h>
#include "board.h"
#include "display.h"

void exibirTabuleiro(char tabuleiro[MAXLIN][MAXCOL][4]) {
    int lin;
    int col;

    for (lin = 0; lin < MAXLIN; lin++) {
        printf(" %i", (8 - lin));
        for (col = 0; col < MAXCOL; col++) {
            printf(" %s ", tabuleiro[lin][col]);
        }
        printf("\n");
    }
    printf("    a    b    c    d    e    f    g    h\n\n");
}
