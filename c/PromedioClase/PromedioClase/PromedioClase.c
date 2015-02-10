/* 
 * File:   PromedioClase.c
 * Author: Victor
 *
 * Created on February 3, 2015, 4:49 PM
 */

#include <stdio.h>
#include <stdlib.h>

struct alumno{
    char nombreAlumno[20];
    char apellidoAlumno[20];
    float nota1;
    float nota2;
};

typedef struct alumno alumnoBase;

/*
 * 
 */
int main(int argc, char** argv) {
    float nota, notaMedia;
    float notaMaxima[2] = {0.0,0.0};
    int noPromediables = 0, suspensos = 0, dudosos = 0, aprobados = 0;
    int numero;
    
    printf("cuantos alumnos hay en clase? " );    
    scanf("%d", &numero);
    
    {
        //la tabla "clase" y la variable "i" seran validas solo dentro de la llaves donde estan declaradas
        alumnoBase clase[numero]; //Se puede acceder a los campos de la clase escribiendo "clase[fila].nombreAlumno"
        int i = 0;
        
        //este bucle for sirve para pedir al usuario todas las notas y rellenar con estos valores la tabla "clase"
        for(i = 0; i < numero; i++) {
            printf("introduzca el nombre del alumno: ");
            scanf("%s",clase[i].nombreAlumno);
            printf("introduzca el apellido del alumno: ");
            scanf("%s",clase[i].apellidoAlumno);

            printf("introducir la 1ª nota del alumno %s %s -> ", clase[i].nombreAlumno, clase[i].apellidoAlumno);
            scanf("%f", &clase[i].nota1);
            // introducimos un controL de errores de insercion
            while( clase[i].nota1 < 0 || clase[i].nota1 > 10) {
                printf("      valor incorrecto \r\n");
                printf("introducir la 1ª nota del alumno %s %s -> ", clase[i].nombreAlumno, clase[i].apellidoAlumno);
                scanf("%f", &clase[i].nota1);
            }
            
            printf("introducir la 2ª nota del alumno %s %s -> ", clase[i].nombreAlumno, clase[i].apellidoAlumno);
            scanf("%f", &clase[i].nota2);
            // introducimos un contror de errores de insercion
            while( clase[i].nota2 < 0 || clase[i].nota2 > 10) {
                printf("      valor incorrecto \r\n");
                printf("introducir la 2ª nota del alumno %s %s -> ", clase[i].nombreAlumno, clase[i].apellidoAlumno);
                scanf("%f", &clase[i].nota2);
            }
        }
        
        printf("\r\n");

        //este bucle for sirve para leer la tabala "clase" y por cada estudiante 
        // calcular la media y poner a cada estudiante en una clasificacción
        for(i = 0; i < numero; i++){
            printf("Alumno %s %s: \t nota 1: %1.2f \t nota 2: %1.2f \t", clase[i].nombreAlumno, clase[i].apellidoAlumno, clase[i].nota1, clase[i].nota2); 
            notaMedia = (clase[i].nota1 + clase[i].nota2) / 2;
            printf("media: %1.2f \t", notaMedia );
            
            if( clase[i].nota1 < 3 || clase[i].nota2 < 3 ){
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
            
            if( notaMaxima[1] < notaMedia ) {
                notaMaxima[1] = notaMedia;
                notaMaxima[0] = i;
            }           
        }
    }
    
    printf("\r\n");
    printf("La nota maxima es: %1.2f del alumno %1.0f \r\n", notaMaxima[1], notaMaxima[0]);
    printf("Alumnos no promediables: %d que es el %1.2f%% \r\n", noPromediables, (float)noPromediables/numero*100 );
    printf("Alumnos suspendidos: %d que es el %1.2f%% \r\n", suspensos, (float)suspensos/numero*100 );
    printf("Alumnos dudosos: %d que es el %1.2f%% \r\n", dudosos, (float)dudosos/numero*100 );
    printf("Alumnos aprobados: %d que es el %1.2f%% \r\n", aprobados, (float)aprobados/numero*100 );
    

    return (EXIT_SUCCESS);
}

