/*La sentencia do while

    do{
        conjunto de expresiones;
        
    }while(expresión lógica);
    
A diferencia dde while, donde el programa "piensa y luego actúa", en do while
"primero actúa, luego piensa".

do, conjunta las instrucciones al menos una vez, si se cumple, se seguirá 
ejecutando.

#include<stdlib.h> mas system("pause") ayuda para que el programa se quede en pausa y no se cierre hasta que el usuario decida.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    
    int i;
    
    i = 1;
    
    do{
        cout<<i<<endl;
        i += 2;
    }while(i<=10);

    system("pause");
    return 0;
}


