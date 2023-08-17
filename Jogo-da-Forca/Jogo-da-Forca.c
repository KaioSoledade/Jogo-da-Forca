#include <stdio.h>
#include <string.h>
 int main(){
  int acertou = 0;
  int enforcou = 1;
   char palavrasecreta[20];

   sprintf(palavrasecreta, "MELANCIA");

   printf("%s", palavrasecreta);
   palavrasecreta[8] = 0;


    printf(" /****************/     \n");
    printf(" / Jogo de Forca */     \n");
    printf(" /****************/     \n");
    printf("                       \n");
    printf("     ______            \n");
    printf("     |/      |         \n");
    printf("     |                 \n");
    printf("     |                 \n");
    printf("     |                 \n");
    printf("     |                 \n");
    printf("     |                 \n");
    printf("    _|___              \n");
    printf("                       \n");   
    printf("                       \n");
    printf("    _ _ _ _ _ _ _ _    \n");
    printf("    Qual letra?        \n");


    do{
      // Iniciar o jogo
      char chute;
      scanf("%c", &chute);

      for(int i=0; i < strlen(palavrasecreta); i++){
        if(palavrasecreta[i] = chute){
          printf("a posicao %d tem essa letra!\n", i);
        }
      }
    } while(!acertou && !enforcou);


 }