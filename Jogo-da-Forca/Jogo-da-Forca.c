#include <stdio.h>
#include <string.h>
 int main(){
  int acertou = 0;
  int enforcou = 1;

   char palavrasecreta[20];
   sprintf(palavrasecreta, "MELANCIA");


    do{
      char chute;
      scanf("%c", &chute);

      for(int i=0; i < strlen(palavrasecreta); i++){
        if(palavrasecreta[i] == chute){
          printf("a posicao %d tem essa letra!\n", i);
        }
      }
    } while(!acertou && !enforcou);


 }