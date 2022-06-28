//Longitud de cadenas de caracteres - función strlen()


#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "hola mundo";
    int longitud=0;//como strlen() devuelve un entero, se declara un int

    longitud = strlen(palabra);
    cout<<"Número de elementos de la cadena: " <<longitud<<endl;
return 0;
}

