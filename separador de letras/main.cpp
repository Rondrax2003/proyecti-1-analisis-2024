#include <iostream>
#include <string>
#include "separadorDeLetras.h"
using namespace std;


int main(){
    Lector myLector("palabra.txt");
    myLector.leerArchivo();
    Store myStore;
    myStore.obtainLetters();
    myStore.showList();
    return 0;
}

/*string palabra = "otorrinolaringologo";

char letras[100];

int main(){
    if(!palabra.empty()){
        for(size_t i = 0; i <palabra.length(); ++i){
            letras[i] = palabra[i];
            cout<< letras[i]<<", ";
        }
        cout<<"eltras almacenadas: "<<endl;
        cout<<"|";
         for(size_t i = 0; i <palabra.length(); ++i){
         cout<<"| "<<letras[i] <<" |";
         }
        cout<<"|";
    }else{
        cout<<"la palabra esta vacia"<<endl;
    }
    return 0;
}*/