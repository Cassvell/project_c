/*Escribir un programa que lea tres números y determine cuál de ellos es el mayor*/

#include<iostream>

using namespace std;

int main(){
    int n1, n2, n3;
    
    cout<<"Digíte 3 números: ";
    cin>>n1>>n2>>n3;
    
    if((n1>=n2) && (n1>=n3)){
        cout<<"\nel mayor es: " <<n1<<endl;
    }
    
    else if((n2>=n1) && (n2>=n3)){
        cout<<"\nEl mayor es: "<<n2<<endl;
    }
    
    else{
        cout<<"\n El mayor número es: "<<n3<<endl;
    }
}
