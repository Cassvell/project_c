/*La sentencia for
    for(expresión1; expresión lógica; expresión 2){
        conjunto de instrucciones;
    }
    
    
    expresión 1: casi siempre es para inicializar el iterador
    expresión lógica: condición que debe cumplirse
    expresión 2: casi siempre es para aumentar el iterador
*/

#include<iostream>

using namespace std;

int main(){
    int i;

    for(i=1; i<=10;i+=3){ //for a diferencia de los demás, permite inicialzar el iterador dentro del buble
    
    cout<<i<<endl;
    }
    return 0;
}
