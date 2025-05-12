#include <stdio.h>
int main (){
    //Movimento da torre 5 casas para direita
    int torre = 1;
    printf("----TORRE----\n\n");

    printf("Movimento torre: \n");

    while(torre <=5 ){
        printf("Direita.\n");
        torre++;
    }

    printf("-------------------------------------------\n");
    

    //Movimento Bispo 5 casas na diagonal 
     printf("----BISPO----\n");
    int bispo = 1;

    printf("Movimento Bispo:\n");

    for (bispo = 1; bispo < 6; bispo++)
    {
       printf(" Direita.\n");
       printf(" Cima.\n");
    }

    printf("-------------------------------------------\n");
    
    // movimento rainha 5 casas para esquerda


     printf("----RAINHA----\n");
    int rainha =1;

    printf("Movimento rainha:\n");
     do
     {
        printf(" Esquerda.\n");
        rainha++;
     } while (rainha <= 8);


       printf("-------------------------------------------\n");

     
// movimento CAVALO 2 casas para BAIXO E UMA PARA ESQUERDA

     printf("----CAVALO----\n");
    int cavaloBaixo = 1 ;
    int cavaloEsquerda = 1;


     printf("Movimento Cavalo:\n");

    for (cavaloEsquerda = 1; cavaloEsquerda <= 1; cavaloEsquerda++)
    {
        while (cavaloBaixo <=2)
        {
             printf("Baixo.\n");
             cavaloBaixo++;
        }
        printf("Esquerda.\n");
        
    }
      printf("-------------------------------------------\n");
    
    return 0;
}
