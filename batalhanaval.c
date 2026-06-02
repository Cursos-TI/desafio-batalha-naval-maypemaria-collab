#include  <stdio.h>

int main() {

char linha [10]= {'A','B','C','D','E','F','G','H','I','J'};

//tabuleiro matriz 10x10//
int tabuleiro [10][10];
for (int linha=0; linha<10; linha++){
    for (int coluna=0; coluna<10; coluna++){
        tabuleiro [linha][coluna] = 0;
    }
    //navio na horizontal//
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;

   //navio na vertical//
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;
}
printf("\n    A  B  C  D  E  F  G  H  I  J\n"); 
for (int linha=0; linha<10; linha++){
    printf("%2d ", linha +1);

    for (int coluna=0; coluna<10; coluna++){
        printf("%2d ", tabuleiro[linha][coluna]);
    }
    printf("\n");
}
}