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

string Lector::ReadFile() {
    if (myFile.is_open()) {
        string linea;
        string text = "";

        while (getline(myFile, linea)) {
            text += linea + "\n";
        }
        return text;
        
    }else{
        cout << "No se pudo abrir el archivo." << endl;
        return "";
    }
}

void Archivist::obtainLetters(){
    ifstream wordFile("palabra.txt");

    if(wordFile.is_open()){
        getline(wordFile, word);
        if(!word.empty()){
            for(size_t i = 0; i <word.length(); ++i){
                AhorcadoWord.insertLetter(word[i]);//method of word that create the list
            }
        }else{
            cout<<"the word is empy"<<endl;
        }
    }else{
        cout<<"file could not be opened"<<endl;
    }

}

void Archivist::showWord(){
    AhorcadoWord.showWord();//method of wod that show list
} 

void Archivist::searchLetter(char value){
    AhorcadoWord.searchLetter(value);
}

void Archivist::savePlayersNames(string name1, string name2){
    ofstream nameFile("palabra.txt", ios::app);
    if(nameFile.is_open())
    {   
        nameFile << "" << endl;
        nameFile << "player 1:" << name1<<endl;
        nameFile << "player 2:" << name2<<endl;
        nameFile.close();
    }else{
        cout<<"file could not be opened"<<endl;
    }
}

