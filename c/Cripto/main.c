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
    char z;
    int num = ('k'-'a');
    
    while( (z = getchar()) != EOF ) {
        if( z >= 'a' && z <= 'z') {
            z = z + num;
            if(z > 'z'){
                z = z -'z' +'a';
            }
            putchar(z);
        }
        else {
            putchar(z);
        }
    }
    
    return (EXIT_SUCCESS);
}

