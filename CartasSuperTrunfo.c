#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    
    // informações de uma carta
    
    char estado[3];
    char codigo [4] ;
    char nomedacidade [100] ;
    int populacao ;
    float area ; 
    float pib ;
    int pontos ;


    // dados das cartas

    printf ("Estado de (A a H) : " ) ;
    scanf  ("%s" , estado ) ;
    

    printf ("digite o Código da Carta de de (01 a 03): ");
    scanf ("%s" , codigo ) ;


    printf ("digite o nome cidade: ");
    scanf ("%s" , nomedacidade ) ;

    
    printf ("digite o numero da População: ") ;
    scanf ("%d" , &populacao);


    printf ("digite a área da cidade em quilômetros quadrados: ") ;
    scanf ("%f" , &area ) ;


    printf ("digite o PIB:");
    scanf ("%f" , &pib);


    printf ("digite o Número de Pontos Turísticos: ") ;
    scanf ("%d" , &pontos ) ; 


    // Dados da carta

    printf("\nDados da Carta\n");

    printf ("Estado : %s\n", estado ) ;

    printf ("Código : %s\n" , codigo ) ;

    printf ("Nomedacidade : %s\n" , nomedacidade ) ;

    printf ("População : %d\n" , populacao) ;

    printf ("Área : %f\n" , area ) ;

    printf ("PIB : %f\n" , pib ) ;

    printf ("Número de Pontos Turísticos : %d\n" , pontos ) ;












    return 0;
}
