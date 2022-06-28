#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int suma = 0, elevacion = 0, n;
    
    cout<<"Digite un número de elementos a sumar: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        elevacion = pow(2,i);
        suma += elevacion;
    }

    cout<<"\nLa suma total es: " <<suma<<endl;
return 0;
}
