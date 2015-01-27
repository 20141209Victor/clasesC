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
    } while();

    return (EXIT_SUCCESS);
}

