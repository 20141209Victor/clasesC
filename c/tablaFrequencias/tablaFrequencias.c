/* 
 * File:   main.cpp
 * Author: Victor
 *
 * Created on December 16, 2014, 4:54 PM
 */

/*
#include <cstdlib>

using namespace std;

/*
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main(int argc, char** argv) {
    int letras['z'-'a'+1];
    char catacterIntroducido;
    int i;
    
    for(i = 'a'; i <= 'z'; i++) {
        letras[i-'a'] = 0;
    }
    
    printf("introducir texto. ctrl+z para terminar\n");
    
    while( (catacterIntroducido = tolower(getchar()) ) != EOF ) {
        if( catacterIntroducido >= 'a' && catacterIntroducido <='z') {
            letras[catacterIntroducido-'a']++;
        }
    }

    for(i = 'a'; i <= 'z'; i++) {
        printf("%d \t %c \t %d \n", i, i, letras[i-'a']);
    }
    
    return 0;
}

