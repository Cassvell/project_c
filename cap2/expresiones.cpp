// Escribir expresiones

#include<iostream>

using namespace std;

int main(){
    float a, b, resultado=0; //el =0 solo aplica para las operaciones con variables
    
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: ";cin>>b;
    
    resultado = (a/b) + 1;
    
    cout.precision(2);  //este procedimiento limita el número de decimales de salida



    cout<<"\nel resultado es: " <<resultado<<endl;
    
    return 0;
}
