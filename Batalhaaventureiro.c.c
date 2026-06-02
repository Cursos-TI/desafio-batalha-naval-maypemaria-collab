#include   <stdio.h>

#define TABULEIRO 10
#define NAVIOSIZE 3 
#define NAVIOS 3    
#define AGUA 0
#define HABILIDADES 5

int main() {
    int tabuleiro[TABULEIRO][TABULEIRO];
    //inicializando o tabuleiro//
    for (int linha=0; linha < TABULEIRO; linha++){
        for (int coluna=0; coluna < TABULEIRO; coluna++){
            tabuleiro[linha][coluna] = AGUA;
        }
    }
    //navio 1 na horizontal//
    for (int i=0; i < NAVIOSIZE; i++) {
    	tabuleiro[2][i] = NAVIOS;
    }
    //navio 2 na vertical//
    for (int i=0; i < NAVIOSIZE; i++){
    	tabuleiro[i][8] = NAVIOS;
       
    }
    //Navio na diagonal 1//
    int linha_d1 = 0;
    int col_d1 = 4;
    for (int k = 0; k < NAVIOSIZE; k++) {
        tabuleiro[linha_d1 + k][col_d1 + k] = NAVIOS;
    }

    //Navio na diagonal 2//
    int linha_d2 = 6;
    int col_d2 = 3;
    for (int k = 0; k < NAVIOSIZE; k++) {
        tabuleiro[linha_d2 + k][col_d2 - k] = NAVIOS;
    }

    //Inserir habilidades especiais//
// ========================================================
    // DEFINIÇÃO DAS MATRIZES DE HABILIDADE (Tamanho 3x5)
    // ========================================================
    
    //  Habilidade em CONE 
    int habilidadeCone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    // Habilidade em CRUZ
    int habilidadeCruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    // Habilidade em OCTAEDRO
    int habilidadeOctaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    
    //  CONE (na linha 4, coluna 0 do tabuleiro)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (habilidadeCone[i][j] == 1) {
                tabuleiro[4 + i][0 + j] = 5;
            }
        }
    }

    //CRUZ (na linha 0, coluna 5 do tabuleiro)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (habilidadeCruz[i][j] == 1) {
                tabuleiro[0 + i][5 + j] = 5;
            }
        }
    }

    // OCTAEDRO (na linha 6, coluna 5 do tabuleiro)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (habilidadeOctaedro[i][j] == 1) {
                tabuleiro[6 + i][5 + j] = 5;
            }
        }
    }
    // Exibir o Tabuleiro no console com loops aninhados//
    printf("========== TABULEIRO BATALHA NAVAL ==========\n\n");
    for (int i = 0; i < TABULEIRO; i++) {
        for (int j = 0; j < TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); 
    }
    printf("\n=============================================\n");

    return 0;
}
