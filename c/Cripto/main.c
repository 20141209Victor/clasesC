/* 
 * File:   main.c
 * Author: Victor
 *
 * Created on December 17, 2014, 4:42 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char caracter;
    char num = ('k'-'a');
    
    while( (caracter = getchar()) != EOF ) {
        if( caracter >= 'a' && caracter <= 'z') {
            caracter = caracter + num;
            if(caracter > 'z'){
                caracter = (caracter - 'z' + 'a' - (char)1) ;
            }
        }
        putchar(caracter);
    }
    
    return (EXIT_SUCCESS);
}

