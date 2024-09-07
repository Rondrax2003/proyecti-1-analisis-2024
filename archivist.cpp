#include <iostream>
#include <string>
#include "archivist.h"
#include "word.h"
using namespace std;


string word;//strig to save the word and transform its letters in chars

Lector::Lector(const string &fileName) {
    myFile.open(fileName);//open .txt
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
        word = text;//save word
        return text;
        
    }else{
        cout << "No se pudo abrir el archivo." << endl;
        return "";
    }
}

void Archivist::obtainLetters(){
    if(!word.empty()){
        for(size_t i = 0; i <word.length(); ++i){
            AhorcadoWord.insertLetter(word[i]);//method of word that create the list
        }
    }else{
        cout<<"la palabra esta vacia"<<endl;
    }
}

void Archivist::showWord(){
    AhorcadoWord.showWord();//method of wod that show list
} 

void Archivist::searchLetter(char value){
    AhorcadoWord.searchLetter(value);
}


