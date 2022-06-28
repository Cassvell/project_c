//comparar dos cadenas de caracteres - Función strcmp()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra1[] = "Hola";
    char palabra2[] = "hola";
    
    if(strcmp(palabra1,palabra2)==0){ //el ==0 es para indicar el condicional de si son iguales o no, !=0 es ppara saber si son distintas al gual que =1
        cout<<"ambas palabras son iguales";
    }
    else{
        cout<<"las palabras son distintas";
    }
    
    //strcmp() también sirve para indicar cual cadena tiene más caracteres. Esto es con strcmp()>0
    return 0;
}

