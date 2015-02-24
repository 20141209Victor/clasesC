/* 
 * File:   PromedioClase.c
 * Author: Victor
 *
 * Created on February 3, 2015, 4:49 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno{
    char nombreAlumno[20];
    char apellidoAlumno[20];
    float nota1;
    float nota2;
};
typedef struct alumno alumnoBase;

typedef struct {
    int noPromediables;
    int suspensos;
    int dudosos;
    int aprobados;
    char nombreAlumnoMax[20];
    char apellidoAlumnoMax[20];
    float notaMax;
}resultados;

resultados funcionBeta(int numero);

/*
 * 
 */
int main(int argc, char** argv) {
    int numero;
    resultados paraImprimir;

    printf("cuantos alumnos hay en clase? " );    
    scanf("%d", &numero);
    
    paraImprimir = funcionBeta(numero);
    
    printf("\r\n");
    printf("La nota maxima es: %1.2f del alumno %s %s \r\n", paraImprimir.notaMax, paraImprimir.nombreAlumnoMax, paraImprimir.apellidoAlumnoMax);
    printf("Alumnos no promediables: %d que es el %1.2f%% \r\n", paraImprimir.noPromediables, (float)paraImprimir.noPromediables/numero*100 );
    printf("Alumnos suspendidos: %d que es el %1.2f%% \r\n", paraImprimir.suspensos, (float)paraImprimir.suspensos/numero*100 );
    printf("Alumnos dudosos: %d que es el %1.2f%% \r\n", paraImprimir.dudosos, (float)paraImprimir.dudosos/numero*100 );
    printf("Alumnos aprobados: %d que es el %1.2f%% \r\n", paraImprimir.aprobados, (float)paraImprimir.aprobados/numero*100 );
    

    return (EXIT_SUCCESS);
}


/*
 * param numero; es el numero de alumnos de la clase
 *      en base de alumnos que hay por clase se crea un tabla de cada alumno con sus dos notas
 * 
 * returns; retorna un dato estructurado como el registro resultados
 *      resultados.noPromediables    int
        resultados.suspensos         int
        resultados.dudosos           int
        resultados.aprobados         int
        resultados.nombreAlumnoMax   char[20]
        resultados.apellidoAlumnoMax char[20]
        resultados.notaMax           float
 * 
 */
resultados funcionBeta(int numero) {
    resultados calculos = {0,0,0,0,"","",0};
    float notaMedia;
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
            calculos.noPromediables++;
        }
        else if( notaMedia < 4 ){
            printf("suspenso\r\n");
            calculos.suspensos++; 
        }
        else if( notaMedia < 5 ){
            printf("dudoso\r\n");
            calculos.dudosos++;
        }
        else {
            printf("aprobado\r\n");
            calculos.aprobados++;
        }

        if( calculos.notaMax < notaMedia ) {
            calculos.notaMax = notaMedia;
            strcpy(calculos.nombreAlumnoMax, clase[i].nombreAlumno);
            strcpy(calculos.apellidoAlumnoMax, clase[i].apellidoAlumno);
        }           
    }
    
    return calculos;
}