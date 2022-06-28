/*
Sentencia switch 

switch(expresion){
    case literal1:
        conjunto de instrucciones1;
        break
    
    case literal2:
        conjunto de instrucciones2;
        break;
    
    case literal3:
        conjunto de instruccionesn;
        break;
    
    default:
        conjunto de instrucciones por defecto;
        break        
}
*/


//Literal:

//Break es para que si no se cumple el determinado caso, que pase al siguiente
//en caso de que no se cumpla ninguno, se irá a default. Sin el break, se genera un bucle.

#include<iostream>

using namespace std;

int main(){

    int num;
    cout<<"Digite un número entre 1 y 5";
    cin>>num;

    switch(num){
        case 1: cout<<"Es el número 1"; break;
        case 2: cout<<"Es el número 2"; break;
        case 3: cout<<"Es el número 3"; break;
        case 4: cout<<"Es el número 4"; break;
        case 5: cout<<"Es el número 5"; break;
        default: cout<<"No está en el rango de 5\n";
    }
	return 0;
}
