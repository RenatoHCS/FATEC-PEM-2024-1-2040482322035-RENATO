#include <stdio.h>
#define Coluna  8
#define Linha  8
#define peca 3
int main() {
    char *chess_board[Linha][Coluna] = {
        {"PT1", "PC1", "PB1", "PD", "PR", "PB2", "PC2", "PT2"},
        {"PP1", "PP2", "PP3", "PP4", "PP5", "PP6", "PP7", "PP8"},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", " ", " "},
       {"BP1", "BP2", "BP3", "BP4", "BP5", "BP6", "BP7", "BP8"},
        {"BT1", "BC1", "BB1", "BD", "BR", "BB2", "BC2", "BR2"}
    };

    for (int i = 0; i < Linha; i++) {
        for (int j = 0; j < Coluna; j++) {
            if ((i+j) % 2 ==0){
                printf("\x1b[47m");
                printf("b");
            }else{
                printf("\x1b[40m");
                printf("p");
            }
            printf("%-*s ", peca, chess_board[i][j]);
            }
        printf("\x1b[0m\n");
    }
    return 0;
}
