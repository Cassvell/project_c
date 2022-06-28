/*
La sentencia if
    if(condicion){
        Instruccion1;
    }

    else{
        Instruccion2;
    }
*/

#include<iostream>

using namespace std;

int main(){
    int num, dato = 5;
    
    cout<<"Digite un número cualquiera: ";
    cin>>num;

    if(num == dato){
        cout<<"El número es 5";       
        
    }
    
    else{
        cout<<"\nnúmero es diferente de 5\n";
    }
    
    return 0;
}
