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
int main( int argc, char** argv ) {
    int caracter;
    int num = ('k'-'a');
    int i;
    
    if (argc >= 2) {
        if(argv[1][0] >= 'a' && argv[1][0] <= 'z' )
            num = ( argv[1][0] - 'a' );
        if(argv[1][0] >= 'A' && argv[1][0] <= 'Z' )
            num = ( argv[1][0] - 'A' );
    }
    
    for(i = 0; i < argc; i++) {
        printf("%s\r\n", argv[i]);
    }
    printf("\r\n");
    
    while( (caracter = getchar()) != EOF ) {
        if( caracter >= 'a' && caracter <= 'z') {
            caracter = caracter + num;
            if(caracter > 'z'){
                caracter = (caracter - 'z' + 'a' - 1) ;
            }
        }
        else if( caracter >= 'A' && caracter <= 'Z') {
            caracter = caracter + num;
            if(caracter > 'Z'){
                caracter = (caracter - 'Z' + 'A' - 1) ;
            }
        }
        putchar(caracter);
    }
    
    return (EXIT_SUCCESS);
}

