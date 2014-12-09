#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int a;
    int b;
    int c;
    int d;
    int e;
    double f;
    
    printf("introduzca sus dos digitos:");
    scanf("%d",&x);
    scanf("%d",&y);
    
    
    
    a=x*x;
    b=y*y;
    printf("cuadrado del primero:%d\n",a);
    printf("cuadrado del segundo:%d\n",b);
    getchar();
    
    
    c=x+y;
    printf("su suma:%d\n",c);
    
    
    d=x-y;
    printf("su resta:%d\n",d);
    
    
    e=x*y;
    printf("su multiplicacion:%d\n",e);
    
    
    
    if(y!=0)
    {
               
               f=(double)x/(double)y;
               printf("su division:%f\n",f);
    }      
    else
    {
               printf("se te ha ido la olla?\n");
               printf("no pienso dividir entre 0!\n");
    }           
    
  
  getchar();
  
  
}
