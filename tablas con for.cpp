/*LA INSTRUCCION FOR SIRVE PARA REALIZAR BUCLES, AL IGUAL QUE LA INSTRUCCION WHILE.
EL MODO COMO VAMOS A ESCRIBIR LA INSTRUCCION ES LA SIGUIENTE:
        
        FOR(VARIABLE INICIADA; MIENTRAS SE CUMPLA LA CONDICION; INCREMENTO O DECREMENTO DE LA VARIABLE INICIADA)
        {
                     INSTRUCCIONES A REALIZAR
                     .
                     .
                     .
                     .
                     .
        }
        
*/

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Que tabla de multiplicar quieres?";
    cin>>b;
    
    for(a=1;a<=10;a++)
    {
                      cout<<a*b<<endl;
    }
    getchar();
    getchar();
}
