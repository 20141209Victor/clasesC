/*Para preguntar algo en la programacion, se utiliza la instruccion IF, seguida de un parentesis de abertura '(', despues se pone la condicion, y se cierra el parentesis ')'
Despues del IF se abre un corchete {, se pone despues de este lo que queremos que se ejecute en caso de que se cumpla la condicion, y a continuacion,
se cierra el corchete } */

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    
    a=10;
    b=7;
    
    if (a==b) //CUANDO ESCRIBIMOS 2 SIGNOS DE IGUAL SEGUIDOS,==, SIRVEN PARA COMPARAR DOS VALORES.
    {
              cout<<"Los valores a y b son iguales"<<endl;
    }
    if(a>b) //ESTO QUIERE DECIR QUE SI A ES MAYOR QUE B
    {
            cout<<"Esta es una prueba"<<endl;
    
    }
    if(a<b) //ESTO QUIERE DECIR QUE SI A ES MENOR QUE B
    {
            cout<<"Me llamo Jose"<<endl;
    }
    if (a!=b) //ESTO QUIERE DECIR QUE SI A ES DIFERENTE DE B
    {
              cout<<"A y b son diferentes"<<endl;
    }
    cin.get();
    cin.get();
}
             
