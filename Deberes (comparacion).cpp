#include <iostream>

using namespace std;

int main()
{
    int A1;
    int A2;
    int A3;
    int A4;
    int F1;
    int F2;
    int F3;
    int F4;
    
    A1=30;
    A2=20;
    A3=10;
    A4=A2+A3;
    F1=70;
    F2=30;
    F3=45;
    F4=F2+F3;
    
    if (A1==A4)
       {
               cout<<"los valores A1 y A4 son iguales"<<endl;
       }
       
    if (A1!=A4)
       {
               cout<<"los valores A1 y A4 son diferentes"<<endl;
       }      
       
    if (F1==A4)
       {
               cout<<"los valores F1 y F4 son iguales"<<endl;
       }
       
    if (F4!=A4)
       {
               cout<<"los valores F1 y F4 son diferentes"<<endl;
       }      
    cin.get();
    
}      
