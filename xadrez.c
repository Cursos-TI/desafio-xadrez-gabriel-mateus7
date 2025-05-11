#include <stdio.h>
int main (){
    //Movimento da torre 5 casas para direita
    int torre = 1;
    printf("----TORRE----\n\n");
    while(torre <=5 ){
        printf("Movimento torre: Uma casa  para direita.\n");
        torre++;
    }

    printf("-------------------------------------------\n");
    

    //Movimento Bispo 5 casas na diagonal 
     printf("----BISPO----\n");
    int bispo = 1;

    for (bispo = 1; bispo < 6; bispo++)
    {
       printf("Movimento Bispo: Uma casa direita.\n");
       printf("Movimento Bispo: Para casa para cima.\n");
    }

    printf("-------------------------------------------\n");
    
    // movimento rainha 5 casas para esquerda

     printf("----RAINHA----\n");
    int rainha =1;
     do
     {
        printf("Movimento rainha: Uma casa  para esquerda.\n");
        rainha++;
     } while (rainha <= 8);
    


    return 0;
}
