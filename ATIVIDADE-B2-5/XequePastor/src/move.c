#include <string.h>
#include "board.h"
#include "move.h"

void jogada(int origem[2], int destino[2], char tabuleiro[MAXLIN][MAXCOL][4]) {
    char peca[4];
    strcpy(peca, tabuleiro[origem[0]][origem[1]]);
    strcpy(tabuleiro[origem[0]][origem[1]], "...");
    strcpy(tabuleiro[destino[0]][destino[1]], peca);
}
