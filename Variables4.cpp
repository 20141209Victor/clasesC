#include <iostream>

using namespace std;

int main()
{
    int A1;
    int A2;
    int A3;
    int A4;
    
    int B1;
    int B2;
    int B3;
    int B4;
    
    A1=10;
    A2=20;
    A3=30;
    A4=A1*A2*A3+A1+A2+A3;
    
    B1=100;
    B2=200;
    B3=300;
    B4=A1*B1+A2*B2+A3*B3;
    
    cout<<A4<<endl;
    cout<<B4<<endl;
    cin.get();
}
    
