/*
Hacer un programa que pida al usuario que digite una cadena de caracteres, 
verificar la longitud de la cadena y si supera los 10 caracteres mostrarlo en la
pantalla, en caso contrario, no mostrarlo
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char frase[50]; //máximo número de caracteres que podrá tener la cadena
    cout<<"Digite una frase: ";
    cin.getline(frase, 50, '\n'); //este comando permite introducir un máximo núm indicado, no mas. En este caso son 50. el ,\n indica que la frase termina con un salto de linea.
    
    if(strlen(frase)>10){
        cout<<frase<<endl;
    }
    else{
        cout<<"La cadena no supera los 10 caracteres";
    }

return 0;
}
