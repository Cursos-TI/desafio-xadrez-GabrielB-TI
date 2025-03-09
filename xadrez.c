#include <stdio.h>

int main(){

   int i;

   printf("Movimento do Bispo:\n");
   i = 0;
   do{
      printf("Cima-Direita\n");
      i++;
   }while (i < 5);

   printf("\nMovimento da torre:\n");

   for(i = 0; i < 5; i++){
      printf("Direita\n");
   }

   printf("\nMovimento da Rainha\n");
   i = 0;
   while (i < 8){
      printf("Esquerda\n");
      i++;
   }


   return 0;
}