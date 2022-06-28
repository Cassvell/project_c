//copiar el contenido de una cadena a otra - Función strcpy()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char nombre[]  = "Isaac";
    //se crea una nueva cadena
    
    char nombre2[20];

    //en este caso, primero va la cadena que está vacía, luego está la cadena
    //a la que se quiere vaciar el contenido
    strcpy(nombre2, nombre);
    
    cout<<nombre2<<endl;
    return 0;
}
