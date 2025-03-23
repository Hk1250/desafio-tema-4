#include <stdio.h> 
#define linhas 10
#define colunas 10

void imprimirTabuleiro(int tabuleiro [linhas][colunas]){
printf("\n   ABCDEFGHIJ\n"); 
//REPRESENTA COLUNAS
for (int i = 0; i < linhas; i++)
{
    printf("%2d ", i + 1 );
     //numeração das linhas
     for (int j = 0; j < colunas; j++)
     {
        printf("%d", tabuleiro[i][j]);
     }
     printf("\n");

}
}
// inicialuzação do tabuleiro
int main() {
    int tabuleiro [linhas][colunas] = {0}; 
  
 tabuleiro[0][0] = 3; tabuleiro[1][1] = 3; tabuleiro[2][2] = 3; tabuleiro[3][3] = 3;
 tabuleiro[4][4] = 3; tabuleiro[5][5] = 3; tabuleiro[6][6] = 3; tabuleiro[7][7] = 3;
 tabuleiro[8][8] = 3; tabuleiro[9][9] = 3; 

    //exibindo tabuleiro
    printf("\nTABULEIRO BATALHA NAVAL \n");
    imprimirTabuleiro(tabuleiro);
    return 0;

    }