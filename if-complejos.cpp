/*PARA PODER PREGUNTAR EN C++, USAMOS LA INSTRUCCION IF, COMO YA HEMOS VISTO DIAS ATRAS. CON EL IF TAMBIEN PODEMOS REALIZAR PREGUNTAS UN POCO
MAS COMPLEJAS, ES DECIR, PREGUNTAR DOS O MAS COSAS AL MISMO TIEMPO. POR EJEMPLO, SI QUEREMOS PREGUNTAR QUE SI A=10
SABEMOS QUE UTILIZAMOS EL IF DEL SIGUIENTE MODO:
        
        IF (A==10)
        
TAMBIEN PODRIAMOS PREGUNTAR AL MISMO TIEMPO QUE SI A=10 Y, ADEMAS, B=20:
        
        IF (A==10 && B==20)
        
SI QUEREMOS PREGUNTAR QUE SI DOS VARIABLES VALEN UNOS VALORES DETERMINADOS AL MISMO TIEMPO, ENTONCES USAREMOS EL SIMBOLO &&, QUE QUIERE DECIR 'Y'

SI QUEREMOS PREGUNTAR SI UNA VARIABLE POSEE UN VALOR U OTRA VARIABLE POSEE OTRO VALOR, ENTONCES USAREMOS EL SIMBOLO ||, CUYO SIGNIFICADO ES 'O'.

            IF (A==10 || B==20).
            
PARA VER MEJOR LA DIFERENCIA, VAMOS A VER UN EJEMPLO:
     
*/

#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int b=40;  
    
    if (a==10 && b==40) //con el simbolo &&, que es 'y', se tienen que cumplir las dos cosas. Con que solo haya una que no se cumple, entonces 
    {                   //no se ejecuta lo que haya a continuacion del IF. Si hay un ELSE, se ejecutara esta parte.
              cout<<"hola"<<endl;
    }
    else
    {
        cout<<"adios"<<endl;
    }
    getchar();
}
