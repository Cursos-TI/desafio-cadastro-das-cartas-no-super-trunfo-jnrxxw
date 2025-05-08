#include <stdio.h>

// Desafio Super Trunfo - Países



int main() {
    
    // carta 1
    
    char estado[3];
    char codigo [4] ;
    char nomedacidade [100] ;
    int populacao ;
    float area ; 
    float pib ;
    int pontos ;

    // carta 2 

    char estado2[3];
    char codigo2 [4] ;
    char nomedacidade2 [100] ;
    int populacao2 ;
    float area2 ; 
    float pib2 ;
    int pontos2 ;







    // informações da carta 1


    printf("\nDigite os Dados da Carta 1\n"); 


    printf ("Estado de (A a H) representando um dos oito estados : " ) ;
    scanf  ("%s" , estado ) ;
    

    printf ("digite o Código da carta , utilizando a letra do estado que você escolheu , em seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf ("%s" , codigo ) ;


    printf ("digite o nome da cidade: ");
    scanf ("%s" , nomedacidade ) ;

    
    printf ("digite o numero da População: ") ;
    scanf ("%d" , &populacao);


    printf ("digite a Área da cidade em km²: ") ;
    scanf ("%f" , &area ) ;


    printf ("digite o PIB em bilhões de reais:") ;
    scanf ("%f" , &pib);


    printf ("digite o Número de Pontos Turísticos: ") ;
    scanf ("%d" , &pontos ) ;



    // informações da carta 2 

    

    printf("\nDigite os Dados da Carta 2\n"); 


    printf ("Estado de (A a H) representando um dos oito estados : " ) ;
    scanf  ("%s" , estado2 ) ;
    

    printf ("digite o Código da carta , utilizando a letra do estado que você escolheu , em seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf ("%s" , codigo2 ) ;


    printf ("digite o nome da cidade: ");
    scanf ("%s" , nomedacidade2 ) ;

    
    printf ("digite o numero da População: ") ;
    scanf ("%d" , &populacao2) ;


    printf ("digite a Área da cidade em km²: ") ;
    scanf ("%f" , &area2 ) ;


    printf ("digite o PIB em bilhões de reais:");
    scanf ("%f" , &pib2);


    printf ("digite o Número de Pontos Turísticos: ") ;
    scanf ("%d" , &pontos2 ) ;






    // Dados da carta 1


    printf("\nCarta 1\n"); 

    printf ("Estado : %s\n", estado ) ;

    printf ("Código : %s\n" , codigo ) ;

    printf ("Nome da Cidade : %s\n" , nomedacidade ) ;

    printf ("População : %d\n" , populacao) ;

    printf ("Área : %.2f km²\n" , area  ) ;

    printf ("PIB : %.2f bilhões de reais\n" , pib ) ;

    printf ("Número de Pontos Turísticos : %d\n" , pontos ) ;




    // Dados da carta 2


    printf("\nCarta 2\n");
    
    printf ("Estado : %s\n", estado2 ) ;

    printf ("Código : %s\n" , codigo2 ) ;

    printf ("Nome da Cidade : %s\n" , nomedacidade2 ) ;

    printf ("População : %d\n" , populacao2) ;

    printf ("Área : %.2f km²\n" , area2  ) ;

    printf ("PIB : %.2f bilhões de reais\n" , pib2  ) ;

    printf ("Número de Pontos Turísticos : %d\n" , pontos2 ) ;

 






    return 0;
}
