//pasar una palabra a mayusculas - Función strupr()

#include<iostream>
#include<string.h>
//#include<ctype.h>
using namespace std;

int main(){
    char palabra[] = "isaac";
    
    strupr(palabra);
    cout<<palabra<<endl;

    return 0;
}
