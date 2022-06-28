/* Escribir un programa para realizar operaciones con datos de entrada*/

#include<iostream>

using namespace std;

int main (){

    float n1, n2, suma=0, resta=0, multiplicacion=0, division=0;//se igualan con cero, ya que posteriormente se les asigna un valor, así que no tiene sentido que tengan un valor inicial.

    cout<<"Digite un número n1: "; cin>>n1;
    cout<<"Digite un número n2: "; cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1*n2;
    division = n1/n2;
    
    cout<<"\n La suma es: " <<suma<<endl; //endl = \n
    cout<<"\n La resta es: " <<resta<<endl;
    cout<<"\nLa multiplicación es: " <<multiplicacion<<endl;
    cout<<"\nLa división es: " <<division<<endl;
    
    return 0;

}
