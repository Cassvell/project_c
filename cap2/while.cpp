/*La sentencia while:
    while (expresión lógica){
        conjunto de instrucciones;
        }
ciclo o bucle, instrucciones que se repiten siempre y cuando la instrucción cumpla con la condición.        
*/


#include<iostream>
//#include<conio.h> 

using namespace std;

int main(){
    int i;
    i=1;

    while(i<=10){
        cout<<i<<endl;
        //i += 1;
        i++; //se suma 1 en 1 hasta siempre que se cumpla la condición
    }
  //  getch();
    return 0;
}
