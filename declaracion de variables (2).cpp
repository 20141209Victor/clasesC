#include <iostream>

using namespace std;

/* Las variables sirven para almacenar valores dentro de ellas. Estos valores pueden ser numeros o letras */

int main()
{
    int a; //creamos una variable de nombre "a", que sera de tipo numerica, y en ella podremos almacenar numeros enteros.
    double b;//creamos una variable de nombre "b", que sera de tipo numerica, y en ella podremos almacenar numeros con mayor capacidad que int.
    char c;//creamos una variable de nombre "c", que sera de tipo caracter, es decir, que en ella podremos almacenar diferentes letras o simbolos.
 
    /*Para poder introducir valores dentro de las variables, es sufiente con igualar las variables al valor que nosotros querramos.
    Si el valor a introducir es una letra, dicha letra ira entre comillas simples '' */
    a=10;
    b=25.48;
    c='g';
    
    //Para poder imprimr los valores de estas variables, se utiliza el comando cout, seguido de los simbolos '<<', y despues, el nombre de la 
    //variable. Al final, podremos incluir en comando endl para indicar que pasamos a la siguiente linea.
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    
    //para finalizar, y para que nos dé tiempo a ver el resultado, podemos incluir una pausa al final del programa. Para ello, existen varias
    //opciones. Nosotros usaremos cin.get().
    cin.get();//para realizar una pausa al final de programa.
}
