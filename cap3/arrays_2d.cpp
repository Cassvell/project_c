/*Arreglos Bidimensionales:

Matrices o tablas

La manera para declarar una matriz en C++ es similar a un vector:

tipo nombre[nfilas][ncolumnas];

3 formas de agregar elementos a una matriz declarada:

int num[n][m] = {1,2,3 , 4,5,6}; 

int num[n][m] = {{1,2,3} , {4,5,6}}; 

int num[n][m] = {{1,2,3,
                 4,5,6}; 

*/


#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int num[100][100], filas, col;
    
    cout<<"Digite número de filas ";
    cin>>filas;
    cout<<"Digite número de columnas ";    
    cin>>col;
    
    //para este caso, se debe utilizar bucles anidados.
    //almacenando elementos en la matríz
    for(int i=0,i<filas;i++){
        for(int j=0;j<col;j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]";
            cin>>num[i][j];
        }
    }
    
    //mostrando la matriz
    //para mostrar se necesita de otro bucle anidado
    
    for(int i=0;i<filas;i++){
        for(int j=0;j<col;j++){
            cout<<num[i][j];
        }
        cout<<endl;
    }    
    
return 0;
}
