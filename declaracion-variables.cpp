/*La declaracion de variables sirve para asignar a una variable un valor determinado, que puede ser un numero o una letra*/

#include <iostream>

using namespace std;

int main()
{
    int a; //la variable a se ha declarado de tipo entero
    double b; // la variable b se ha declarado de tipo doble.
    float c; // la variable c se ha declarado de tipo flotante. Para notacion cientifica.
    char d; // la variable d se ha declarado de tipo caracter. Esto quiere decir que dicha variable tiene capacidad para guardar un caracter.
    
    a=10; //a la variable a le introduzco el valor 10.
    b=26.4; //a la variable b le introduzco el valor 26.4, pues el tipo double permite los decimales.
    c=3.5e+4; //a la variable c le he introducido un valor en notacion cientifica, que quiere decir 10 elevado a 3
    d='z'; //a la variable d le he introducido un caracter, que es z. Los caracteres individuales van entre comillas simples ''
    
    /*para sacarlo por pantalla, tenemos que utilizar COUT */
    cout<<a<<endl; //el ENDL lo pongo al final de linea para que una vez que se imprima el valor, pase a la siguiente linea.
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    
    cin.get(); //esta linea sirve para realizar una pausa.
    
}
