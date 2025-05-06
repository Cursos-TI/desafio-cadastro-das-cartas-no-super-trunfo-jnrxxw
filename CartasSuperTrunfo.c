#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // informações de uma carta
    
    char estado ;
    char codigo [2] ;
    char nomedacidade [100] ;
    int populaçao ;
    float area ; 
    float pib ;
    int pontos ;


    // dados das cartas

    printf ("Estado de A a H" ) ;
    scanf  ("%s" , estado ) ;
    

    printf ("digite o Código da Carta de de (01 a 03) ")
    scanf ("%s" , codigo ) ;


    printf ("digite o nome cidade");
    scanf ("%s" , nomedacidade ) ;

    
    printf ("digite o numero da População") ;
    scanf ("%d" , &população);


    printf ("digite a área da cidade em quilômetros quadrados") ;
    scanf ("%f" , &area ) ;


    printf ("digite o PIB");
    scanf ("%f" , &pib);


    printf ("digite o Número de Pontos Turísticos") ;
    scanf ("%d" , &pontos ) ; 


    // Dados da carta

    printf ("Estado : %s" estado ) ;

    printf ("Código : %s" codigo ) ;

    printf ("Nome da Cidade : %s" nomedacidade ) ;

    printf ("População : %d" populaçao) ;

    printf ("Área : %f" area ) ;

    printf ("PIB : %f" pib ) :

    printf ("Número de Pontos Turísticos : %d" pontos ) ;












    return 0;
}
