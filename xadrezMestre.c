#include <stdio.h>

void movTorre(int torre){
    for (int i = 1; i <= torre; i++)
    {
        printf("Direita.\n");
    }
    
}

void movBispo (int bispo){

    for (int i = 1; i <= bispo; i++)
    {
        
        for (int j = 1; j <= 1; j++)
        {
            printf ("direita.\n");
        }

        printf ("Cima.\n");        
    }
    
}

void movRainha(int rainha){
    for (int i = 1; i <= rainha; i++)
    {
        printf("Esquerda.\n");
    }
    
}

void movCavalo(int cavalo){
    
        for (int i = 1, j = 1 ; i <= cavalo ; i++)
    {
        printf("Cima.\n");
        printf("Cima.\n");
        printf("Direita.\n");
    }
}

int main (){
    //Movimento da torre 5 casas para direita
    int torre = 5;
    printf("----TORRE----\n\n");

    printf("Movimento torre: \n");
    movTorre(torre);

    printf("-------------------------------------------\n");
    

    //Movimento Bispo 5 casas na diagonal 
     printf("----BISPO----\n");
    int bispo = 5;

    printf("Movimento Bispo:\n");

    movBispo(bispo);

    printf("-------------------------------------------\n");
    
    // movimento rainha 5 casas para esquerda


     printf("----RAINHA----\n");
    int rainha = 8;

    movRainha(rainha);

       printf("-------------------------------------------\n");

     
// movimento CAVALO 2 casas para BAIXO E UMA PARA ESQUERDA

    int cavalo = 1;

     printf("----CAVALO----\n");
     printf("Movimento Cavalo:\n");
     movCavalo(cavalo);

     printf("-------------------------------------------\n");

   return 0;
}
