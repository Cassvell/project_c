//Añadir o concatenar una cadena con otra - Función strcat()


#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char cat1[] = "esto es un desvergue";
    char cat2[] = "de ejemplo";
    char cat3[30]; //se tienen que agregar a una cadena vacía
    
    strcpy(cat3,cat1); //esto es una cadena, se copia cat1 a cat3
    strcat(cat3,cat2); //cat ya cuenta con ambos 
    cout<<cat3<<endl;

return 0;
}
