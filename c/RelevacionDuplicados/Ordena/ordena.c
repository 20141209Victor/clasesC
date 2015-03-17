/* 
 * File:   ordena.c
 * Author: Victor
 *
 * Created on March 17, 2015, 5:18 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 80

int PedirCadenas (char **lista, int numero);

/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    int numero;
    char **lista;
    
    printf("Cuantas filas hay que leer? ");
    scanf("%d", &numero);
    while ( getchar() != '\n' );
    
    lista = (char **) malloc( numero * sizeof(char *) );
    if( lista == NULL ) {
        printf("ERROR, memoria no suficiente. \n" );
        return 1;
    }
    
    // pedir cadenas
    numero = PedirCadenas (lista, numero);
    printf("Se han leido %d filas:\n\n", numero);

    // ordenar cadenas
    
    
    // imprimir
    printf("\n\n Lista ordenada de %d filas:\n\n", numero);
    for(i = 0; i < numero; i++) {
        // printf("%s\n", *lista + i );
        printf("%s\n", lista[i] );
    }
    
    for(i = 0; i < numero; i++) {
        free(lista[i]);
    }
    free(lista);

    return (EXIT_SUCCESS);
}



int PedirCadenas (char **lista, int numero) {
    int i;
    char fila[MAXCHAR];
    
    for(i = 0; i < numero; i++) {
        gets(fila);
        lista[i] = (char *) malloc( strlen(fila)+1 ); // strlen() conta hasta que encuentra '\0'
        if( lista == NULL ) {
            printf("ERROR, memoria no suficiente. \n" );
            return i;
        }
        strcpy(lista[i], fila);
    }
    
    return i;
}
