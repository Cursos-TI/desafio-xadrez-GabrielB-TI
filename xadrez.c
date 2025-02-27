#include <stdio.h>

int main(){

   int numero_peca;

   printf("Escolha uma Peça para mover: ");
   printf("Bispo(1)\n");
   printf("Rainha(2)\n");
   printf("Torre(3)\n");

   scanf("%d", &numero_peca);


   for(int i = 0; i < 5; i++){
      printf("Direita\n");
   }
   return 0;
}