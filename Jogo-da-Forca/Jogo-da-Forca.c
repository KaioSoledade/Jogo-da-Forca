#include <stdio.h>
#include <string.h>

 int main(){
  int acertou = 0;
  int enforcou = 1;

   char palavrasecreta[20];
   sprintf(palavrasecreta, "MELANCIA");

  char chutes[26];
  int tentativas = 0;
    do{
      for(int i=0; i < strlen(palavrasecreta); i++){
        printf("_ ");
      }
      printf("\n");

      char chute;
      scanf(" %c", &chute);

      chutes[tentativas] = chute;
      tentativas ++;


    } while(!acertou && !enforcou);


 }