#include <stdio.h>
#include <string.h>
#include "board.h"
#include "display.h"
#include "checkmate.h"

void criarTabuleiro(void) {
    char tabuleiro[MAXLIN][MAXCOL][4];
    char numChar[2];
    char peca[4];
    char *pecas[] = {"T1", "C1", "B1", "D ", "R ", "B2", "C2", "T2"};
    int lin;
    int col;

    printf("=========================================\n");
    printf("       Posicao inicial do tabuleiro\n");
    printf("=========================================\n\n");

    for (lin = 0; lin < MAXLIN; lin++) {
        for (col = 0; col < MAXCOL; col++) {
            if (lin < 2 || lin >= 6) {
                lin < 2 ? strcpy(peca, "P") : strcpy(peca, "B");
                if (lin == 1 || lin == MAXLIN - 2) {
                    strcat(peca, "P");
                    sprintf(numChar, "%i", col + 1);
                    strcat(peca, numChar);
                } else {
                    strcat(peca, pecas[col]);
                }
                strcpy(tabuleiro[lin][col], peca);
            }
            if (lin >= 2 && lin < 6) {
                if (lin % 2 == 0) {
                    col % 2 == 0 ? strcpy(peca, " - ") : strcpy(peca, " X ");
                } else {
                    col % 2 == 0 ? strcpy(peca, " X ") : strcpy(peca, " - ");
                }
                strcpy(tabuleiro[lin][col], peca);
            }
        }
    }
    exibirTabuleiro(tabuleiro);
    xequePastor(tabuleiro);
}
