/*
Estructura anidada:
Se trata de una estructura anidada dentro de otra
*/

#include<iostream>
#include<string.h>

using namespace std;

struct  info_dir
{
    /* data */
    char direccion[30];
    char ciudad[20];
    char estado[20];
};

struct empleado
{
    /* data */
    char nombre[20];
    struct info_dir dir_empleado;
    double salario;    
}empleados[2]; //lo que se hace es un arreglo de estructuras, similar a los arreglos vectoriales


void clean_stdin(void) //función que permite vaciar el buffer y permitir seguir digitando valores.
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main(){
    for(int i=0;i<2;i++){
        /*el problema con utilizar tantas cadenas de caracteres es que se llena el buffer
        lo que hace que se rellene info sin que el usuario introduzca datos.
        Para arreglarlo: */
        clean_stdin(); //permite vaciar el buffer y permitir seguir digitando valores.
        cout<<"Digite su nombre: ";      
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Digite su dirección: ";
        cin.getline(empleados[i].dir_empleado.direccion,30,'\n');        
        cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cin.getline(empleados[i].dir_empleado.estado,20,'\n');  
        fflush(stdin);  
        cout<<"Digite el salario: ";    
        cin>>empleados[i].salario;
        cout<<"\n"<<endl;
            }

    //imprimiendo los datos:

    for(int i=0;i<2;i++){
        cout<<"nombre: "<<empleados[i].nombre<<endl;
        cout<<"direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<empleados[i].dir_empleado.estado<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
        cout<<"\n"<<endl;
        
    }
    return 0;
}