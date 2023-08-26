#include <stdio.h>
#include <string.h>

void abertura(){
  printf("*******************\n");
  printf("*  Jogo da Forca  *\n");
  printf("*******************\n\n");
}
void chute(){
  
      char chute;
      scanf(" %c", &chute);

      chutes[tentativas] = chute;
      tentativas ++;

}
 int main(){
  int acertou = 0;
  int enforcou = 0;

   char palavrasecreta[20];
   sprintf(palavrasecreta, "MELANCIA");

  char chutes[26];
  int tentativas = 0;

  abertura();

    do{

      for(int i = 0; i < strlen(palavrasecreta); i++){

        int achou = 0;


        for( int j = 0; j <= tentativas; j++ ){
            if(chutes[j] == palavrasecreta[i]){
            achou = 1;
            break; 
            }
        }
        if(achou){
          printf("%c ", palavrasecreta[i]);
        } else{
          printf("_ ");
        }

      }
      printf("\n");

    chute();

    } while(!acertou && !enforcou);{
      printf("Voce perdeu");
    }


 }