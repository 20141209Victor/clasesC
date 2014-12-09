#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{
    int tabla;
    int numero;
       
    
    cout<<"Introduce la tabla que quieres exponer:";//esta linea sirve para imprimir por pantalla la pregunta
    cin>>tabla;//se introduce el valor en la variable tabla
    /*esta es una prueba de un comentario de mas de una linea */
    
    for(numero=1;numero<=10;numero++)
    {
                                     cout<<tabla<<"*"<<numero<<"="<<numero*tabla<<endl;//salida por pantalla de cada una de las operaciones de multiplicar.
    }
    getch();//para realizar una pausa
}
