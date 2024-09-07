#include <iostream>
#include "word.h"
#include "archivist.h"
using namespace std;

Letter::Letter(char value){
    this->data = value;
    this->next = nullptr;
    this->prior = nullptr;
}

Word::Word(){
    this->start = nullptr;
    this->end = nullptr;
    this->size = 0;
}

void Word::insertLetter(char value){// sinsert ellter wich a stack
    
    if(this->start == nullptr){
        Letter* NewLetter = new Letter(value);
        this->start = NewLetter;
        this->end = NewLetter;
        size++;
    }else{
        Letter* NewLetter = new Letter(value);
        Letter* current = this->end;
        if(current->next == nullptr){
            current->next = NewLetter;
            NewLetter->prior = current;
            this->end = NewLetter;
            current = current->next;
        }else{
            current = current->next;
        }

    }
}

void Word::searchLetter(char value){
    Letter* current = this->start;
    int foundLetters = 0;


        while(current->next != nullptr){
            if(current->data == value){
                cout<<"found letter :" << current->data<<endl;
                foundLetters++;
                current = current->next;
            }else{
                current=current->next;
            }
        }
        if(current->next == nullptr && foundLetters == 0 ){
            /*aqui poner que le sume 1 a las vidas*/
            cout<<"letter not found"<<endl;
            current = nullptr;
            delete current;
        }else if(current->next == nullptr && foundLetters !=0){
            
        }
                
            
        cout<<foundLetters<<endl;
    }


void Word::showWord(){
    Letter* printer;
    for(printer = this->start;printer != nullptr; printer = printer->next)
    {
        cout<< printer->data<<" | ";
    }
}