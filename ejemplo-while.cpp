#include <iostream>

using namespace std;

int main()
{
    int a=10;
    
    while(a<=300)          /*EL WHILE ES UNA INSTRUCCION QUE SIRVE PARA REPETIR UNA CIERTA CANTIDAD DE VECES LO QUE HAY ENTRE LA LLAVE SIGUIENTE 
                        AL WHILE Y LA LLAVE DE CIERRE. TODO LO QUE HAY ENTRE AMBAS LLAVES SE DENOMINA "CUERPO DEL BUCLE" */
    {
              
              cout<<a<<endl;
              
              a=a+10;
              
    }
    getchar();
}
