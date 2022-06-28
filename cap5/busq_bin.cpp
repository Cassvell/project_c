//Busqueda Binaria
/*
Busca un dato en una lista ordenada
*/

#include<iostream>
using namespace std;

void intercambio(int &x,int &y){
    int aux;
    aux = x;
    x = y;
    y = aux;
}

void quicksort(int a[], int ini, int fin){
    int i, j, centro;
    int pivote;

    centro = (ini+fin) / 2;
    pivote = a[centro];
    i = ini;
    j = fin;

    do{
        while(a[i] < pivote) i++;
        while(a[j] > pivote) j--;

        if(i<=j){
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
    }while(i <= j);

    if(ini < j ){
        quicksort(a, ini, j); //ordenamos la sublista izq
    }

    if(i < fin){
        quicksort(a, i, fin); //ordenamos la sublista derecha
    }
}

int main(){
    int num[] = {4,7,2,6,3,5,9,2,43,54,2,245,56,67,8,20,47};
    int inf, sup, mitad, dato;
    char bandera = 'F';

    quicksort(num, 0, 16);

    //Algoritmo de búsqueda Binaria 
    dato = 12;
    inf = 0;
    sup = 16;
    while(inf <= sup){
        mitad = (inf+sup) / 2;

        if(num[mitad] == dato){
            bandera = 'V';
            break;
        }
        if(num[mitad] > dato){
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
        if(num[mitad] < dato){
            inf = mitad;
            mitad = (inf+sup) / 2;
        }   
    }  

    if(bandera == 'V'){
        cout<<"El número a buscar ha sido encontrado en la posición: "<<mitad<<endl;
    } 

    else {
        cout<<"El numero no ha sido encontrado"<<endl;
    }
    return 0;
}