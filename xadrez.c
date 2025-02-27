#include <stdio.h>

int main(){

   int numero_peca;
   int direcao;

   printf("Escolha uma Peça para mover:\n");
   printf("Bispo (1)\n");
   printf("Rainha (2)\n");
   printf("Torre (3)\n");

   scanf("%d", &numero_peca);

   if(numero_peca == 1){
      printf("Escolha a direçao que o Bispo se move-ra: ");
      printf("Diagonal Superior Esquerda (1)\n");
      printf("Diagonal Superior Direita (2)\n");
      printf("Diagonal Inferior Esquerda (3)\n");
      printf("Diagonal inferior Direita (4)\n");

      scanf("%d", &direcao);
   }else{
      printf("Direçao nao encontrada! ");
   }

   return 0;
}