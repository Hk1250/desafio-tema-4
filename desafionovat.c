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

    //posicionamento de navios
    // numero 1 representa os navios

    tabuleiro[7][7]= 1; //navio no A1
    tabuleiro[7][0]= 1; // navio no A2 e assim seguindo as regras dos indices
    tabuleiro[7][4] = 1; 
    tabuleiro[6][0] = 1;
    tabuleiro[5][0]= 1;
   tabuleiro[4][0] = 1;

    //exibindo tabuleiro
    printf("\nTABULEIRO BATALHA NAVAL \n");
    imprimirTabuleiro(tabuleiro);
    return 0;


}
