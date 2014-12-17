/* 
 * File:   main.c
 * Author: Victor
 *
 * Created on December 17, 2014, 4:18 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    
    for( i = 10; i < 256; i+=1 ) {
        printf(" %d \t  %c \n ", i, i);
    }
    
    return (EXIT_SUCCESS);
}

