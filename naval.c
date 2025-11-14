# include <stdio.h> 
  int matriz[3][3]; // matriz com 3 linhas e 3 colunas
int main() {
     printf (" posição dos navios \n");
        for (int linha = 0; linha < 3; linha++) {
            for (int coluna = 0; coluna < 3; coluna++) {
                printf ("Digite 0 para agua e 1 para navio na posição [%d][%d]: ", linha, coluna);
                scanf ("%d", &matriz[linha][coluna]);
            }
        }
    printf ("Mapa dos navios \n");
        for (int linha = 0; linha < 3; linha++) {
            for (int coluna = 0; coluna < 3; coluna++) {
                if (matriz[linha][coluna] == 1) {
                    printf ("N "); // N representa navio
                } else {
                    printf ("~ "); // ~ representa agua
                }
            }
            printf ("\n");
        }
         
        printf (" navio na horizontal \n");
        for (int linha = 0; linha < 3; linha++) {
            for (int coluna = 0; coluna < 2; coluna++) {
                if (matriz[linha][coluna] == 1 && matriz[linha][coluna + 1] == 1) {
                    printf ("Navio encontrado na horizontal na linha %d, colunas %d e %d\n", linha, coluna, coluna + 1);
                }
            }
        }

 printf (" navio na vertical \n");
        for (int coluna = 0; coluna < 3; coluna++) {
            for (int linha = 0; linha < 2; linha++) {
                if (matriz[linha][coluna] == 1 && matriz[linha + 1][coluna] == 1) {
                    printf ("Navio encontrado na vertical na coluna %d, linhas %d e %d\n", coluna, linha, linha + 1);
                }
            }
        }








    return 0;
}