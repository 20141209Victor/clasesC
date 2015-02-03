/* 
 * File:   PromedioClase.c
 * Author: Victor
 *
 * Created on February 3, 2015, 4:49 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float nota, notaMedia, notaMaxima = 0;
    int noPromediables = 0, suspensos = 0, dudosos = 0, aprobados = 0, alumnoNotaMaxima = 0;
    int numero;
    
    printf("cuantos alumnos hay en clase? " );    
    scanf("%d", &numero);
    
    {
        //la tabla "clase" y la variable "i" seran validas solo dentro de la llaves donde estan declaradas
        float clase[numero][3];
        int i = 0;
        
        //este bucle for sirve para pedir al usuario todas las notas y rellenar con estos valores la tabla clase
        for(i = 0; i < numero; i++) {
            clase[i][0] = i+1;

            printf("introducir la 1ª nota del alumno %d", i+1);
            scanf("%d", &clase[i][1]);
            // introducimos un contror de errores de insercion
            while( clase[i][1] < 0 || clase[i][1] > 10) {
                printf("      valor incorrecto \r\n");
                printf("introducir la 1ª nota del alumno %d", i+1);
                scanf("%d", &clase[i][1]);
            }
            
            printf("introducir la 2ª nota del alumno %d", i+1);
            scanf("%d", &clase[i][2]);
            // introducimos un contror de errores de insercion
            while( clase[i][2] < 0 || clase[i][2] > 10) {
                printf("      valor incorrecto \r\n");
                printf("introducir la 2ª nota del alumno %d", i+1);
                scanf("%d", &clase[i][2]);
            }
        }
        
        for(i = 0; i < numero; i++){
            printf("Alumno numero %d: \t nota 1: %f \t nota 2: %f \t", i+1, clase[i][1], clase[i][2]);
            notaMedia = (clase[i][1] + clase[i][2]) / 2;
            printf("media: %f \t", notaMedia );
            
            if( clase[i][1] < 3 || clase[i][2] < 3 ){
                printf("no promediable\r\n");
                noPromediables++;
            }
            else if( notaMedia < 4 ){
                printf("suspenso\r\n");
                suspensos++; 
            }
            else if( notaMedia < 5 ){
                printf("dudoso\r\n");
                dudosos++;
            }
            else {
                printf("aprobado\r\n");
                aprobados++;
            }
            
            
            ..............
            
        }
        
    }
    
    
    return (EXIT_SUCCESS);
}

