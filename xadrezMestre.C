#include <stdio.h>

// Funções recursivas para movimentação das peças
void moverTorre(int casas) {
  if (casas <= 0) return;
  printf("Direita\n");
  moverTorre(casas - 1);
}

void moverBispo(int casas) {
  if (casas <= 0) return;
  printf("Cima esquerda\n");
  moverBispo(casas - 1);
}

void moverRainha(int casas) {
  if (casas <= 0) return;
  printf("Esquerda\n");
  moverRainha(casas - 1);
}

void moverCavalo(int movimentos) {
  if (movimentos <= 0) return;
  for (int i = 0; i < 2; i++) {
      printf("Baixo\n"); // imprime baixo 2x
  }
  printf("Esquerda\n"); // imprime esquerda 1x
  moverCavalo(movimentos - 1);
}

   int main() {

      // Peças do jogo    
      int casasTorre = 5;
      int casasBispo = 4;
      int casasRainha = 5;
      int movimentosCavalo = 1; // O cavalo se move uma vez em "L"

      // Movimentação da Torre
      printf("Mova a Torre 5 casas à direita...\n");
      moverTorre(casasTorre);
      printf("\n");

      // Movimentação do Bispo
      printf("Mova o Bispo 4 casas para cima e esquerda...\n");
      moverBispo(casasBispo);
      printf("\n");

      // Movimentação da Rainha
      printf("Mova a Rainha 5 casas à esquerda...\n");
      moverRainha(casasRainha);
      printf("\n");

      // Movimentação do Cavalo
      printf("Movendo o Cavalo...\n");
      moverCavalo(movimentosCavalo);
      printf("\n");

      return 0;

}