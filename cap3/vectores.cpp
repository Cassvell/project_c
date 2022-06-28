/*Los Vectores
Vector o arreglo unidimensional. Un tipo de dato que almacena secuencias de datos
del mismo tipo.

Para definir un vector:

-tipo nombre[tamaño];

inicialización (rellenar un arreglo)

int num[] = {datos}


*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for(int i=0;i<10;i++){
        sum += num[i];
    }
    
    cout<<sum<<endl;
return 0;
}

