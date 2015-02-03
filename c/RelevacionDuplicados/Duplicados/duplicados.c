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
    int duplicados = 0;
    
    
    gets(lineaAnterior);
    puts(lineaAnterior);
    
    do {
        sscanf(lineaAnterior, "%s", codigoAnterior);
        gets(lineaActual);
        sscanf(lineaActual, "%s", codigoActual);
        if( strcmp(codigoAnterior, codigoActual) == 0 ) {
            putchar('\t');
            puts(lineaActual);
            duplicados++; // es un atajo para escribir "duplicados = duplicados + 1", tambien se puede escribir "duplicados += 1" 
        }
        else {
            puts(lineaActual);
        }
        strcpy(lineaAnterior, lineaActual);
    } while( feof(stdin) == 0 );
    
    printf("\r\n\r\nse han encontrado %d duplicados.\n", duplicados);

    return (EXIT_SUCCESS);
}

