//Busqueda secuencial
/*
Busca secuencialmente en un arreglo, un dato determinado.
*/


#include<iostream>
using namespace std;

int main(){
    int num[] = {4,7,2,6,3,5,9,2,43,54,2,245,56,67,8,20,47};
    int i, dato;
    char bandera = 'F';

    //Algoritmo de Busqueda
    dato = 7;
    i = 0;
    while((bandera == 'F') && (i<17)){
        if(num[i] == dato){
            bandera = 'V';
        }
        i++;      
    }

    if(bandera == 'F'){
        cout<<"El número a buscar no existe en el arreglo"<<endl;
    }
    else if(bandera == 'V'){
        cout<<"El número a buscar ha sido encontrado en la posición: "<<i-1<<endl;
    }

    return 0;
}