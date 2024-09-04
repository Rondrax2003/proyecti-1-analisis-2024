#include <iostream>
#include <string>
#include "separadorDeLetras.h"
using namespace std;

char Letters[100];
string word;

Lector::Lector(const string &fileName) {
    myFile.open(fileName);
}

Lector::~Lector() {
    myFile.close();
}

string Lector::leerArchivo() {
    if (myFile.is_open()) {
        string linea;
        string text = "";

        while (getline(myFile, linea)) {
            text += linea + "\n";
        }
        word = text;
        return text;
        
    }else{
        cout << "No se pudo abrir el archivo." << endl;
        return "";
    }
}

void Store::obtainLetters(){
    if(!word.empty()){
        for(size_t i = 0; i <word.length(); ++i){
            Letters[i] = word[i];
        }
    }else{
        cout<<"la palabra esta vacia"<<endl;
    }
}

void Store::showList(){
    for(size_t i = 0; i <word.length(); ++i){
        cout<<"| "<<Letters[i] <<" |";
        }
    cout<<"|";
}