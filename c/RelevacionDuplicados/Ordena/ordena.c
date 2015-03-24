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
int OrdenarCadenas(char **lista, int numero);

char **fusionar(char **lista1, int numero1, char **lista2, int numero2){
    char **temp;
    int elementosFusionados = 0;
    int largoLista1 = numero1 , largoLista2 = numero2;
    
    while( (numero1 > 0) && (numero2 > 0) ) {
        if ( strcmp( lista1[largoLista1-numero1], lista2[largoLista2-numero2] ) > 0 ) {
            temp[elementosFusionados] = lista1[largoLista1-numero1];
            numero1--;
        }
        else {
            temp[elementosFusionados] = lista2[largoLista2-numero2];
            numero2--;
        }
        elementosFusionados++;
    }
    
    return temp;
}

char **OrdenarCadenas2(char **lista, int numero){
    int elementoMedio;
    char *temporal;
    
    if(numero > 2){
        elementoMedio = (numero/2)+1;
        return fusionar( 
                    OrdenarCadenas2(lista, elementoMedio-1), elementoMedio-1 , 
                    OrdenarCadenas2(lista+elementoMedio, numero-elementoMedio), numero-elementoMedio 
                );
        }
    else if( numero == 2){
        if( strcmp( lista[0], lista[1] ) > 0 ) {
            temporal = lista[1];
            lista[1] = lista[0];
            lista[0] = temporal;
        }
        return lista;
    }
    else {
        return lista;
    }
}
/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    int numero;
    char **lista;
    int repetido;
    
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
    OrdenarCadenas2(lista, numero);
    
    // imprimir
    // printf("para ordenadar se han realizado %d comprobaciones", repetido);
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

int OrdenarCadenas(char **lista, int numero) {
    int i, comprobaciones = 0;
    char *temporal;
    int cambiosRealizados = 1;
    
    while( cambiosRealizados == 1 ) {
        numero--;
        cambiosRealizados = 0;
        for(i = 0; i < numero; i++) {
            comprobaciones++;
            if( strcmp( lista[i], lista[i+1] ) > 0 ) {
                temporal = lista[i+1];
                lista[i+1] = lista[i];
                lista[i] = temporal;
                cambiosRealizados = 1;
            }
        }
    }
    
    return comprobaciones;
}
