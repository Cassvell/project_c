/*Estructura:
Es una colección de uno a más tipos de elementos denominados campos, cada uno de
los cuales puede ser un tipo de dato diferente.

En las estructuras podemos tener diferentes tipos (int, float, char, etc.)
supongamos que se requiere almacenar datos de una colección de CD. Sus datos 
pueden ser:

*Título
*Artista
*nCanciones
*Fecha de compra

La estructura tiene esta sintaxix:

struct coleccion_CD {
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];
};

Es posible declarar las variables de la estructura en la función principal o bien,
en la misma estructura.
*/
#include<iostream>
using namespace std;

struct persona{
    char nombre[20];
    int edad;
    char profession[20];

}
persona1 = {"Isaac", 26, "ingeniero"},
persona2 = {"Lalo", 25, "ingeniero"};

struct personaV2{
    char nombre[20];
    int edad;
}personaV2_1,  personaV2_2;

int main(){
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;

    cout<<"Nombre2: "<<persona1.nombre<<endl;
    cout<<"Edad2: "<<persona1.edad<<endl;    

    //¿que pasa cuando no se sabe los datos que llenan los campos?
    //permitimos introducir datos por el usuario para la segunda struc

    cout<<"Nombre: ";
    cin.getline(personaV2_1.nombre,20,'\n'); //esto es para introducir char

    cout<<"Edad: ";
    cin>>personaV2_1.edad;

    cout<<"Imprimiendo datos:"<<endl;
    cout<<"Nombre: "<<personaV2_1.nombre<<endl;
    cout<<"Edad: "<<personaV2_1.edad<<endl;
    return 0;
}