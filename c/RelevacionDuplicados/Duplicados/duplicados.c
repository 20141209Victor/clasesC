/* 
 * File:   duplicados.c
 * Author: Victor
 *
 * Created on January 27, 2015, 5:20 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char lineaActual[160];
    char lineaAnterior[160];
    char codigoActual[33];
    char codigoAnterior[33];
    
    gets(lineaAnterior);
    puts(lineaAnterior);
    
    do {
        sscanf(lineaAnterior, "%s", codigoAnterior);
        gets(lineaActual);
        sscanf(lineaActual, "%s", codigoActual);
        if( strcmp(codigoAnterior, codigoActual) == 0 ) {
            putchar('\t');
            puts(lineaActual);
        }
        else {
            puts(lineaActual);
        }
        strcpy(lineaAnterior, lineaActual);
    } while( feof(stdin) == 0 );

    return (EXIT_SUCCESS);
}

