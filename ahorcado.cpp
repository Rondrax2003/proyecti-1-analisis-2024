#include <iostream>
#include "ahorcado.h"
using namespace std;

char option;
char letter;
int lives = 8;
int errors;

void Ahorcado::clearTerminal(){
    system("clear");
    if (system("clear") == -1){
        cout<< "error in clear terminal"<<endl;
    }
}

int Ahorcado::menu(){
    while(true){
        clearTerminal();
        cout<<"\t:::Menu:::"<<endl;
        cout<<"1) play game"<<endl;
        cout<<"2) load game"<<endl;
        cout<<"3) credits"<<endl;
        cout<<"4) exit"<<endl;
        cout<<"selec one option =>";
        cin>>option;

        switch (option)
        {
        case '1':
            /* code */
            break;
        case '2':
            /* code */
            break;
        case '3':
            /* code */
            break;
        case '4':
            return 0;
            break;

        
        default:
            break;
        }
    }
}

void Ahorcado::newGame(){

        while (lives > 0 )
        {
            clearTerminal();
            cout<<"::: A H O R C A D O :::"<<endl;
            Draw();
            cout<<"erros:" <<errors<<endl;
            cout<<"insert letter: ";
            cin>>letter;
        }
        
}
void Ahorcado::Draw(){
    switch (lives)
    {
    case 8:
        cout<<"             "<<endl;
        cout<<"             "<<endl;    
        cout<<"             "<<endl;   
        cout<<"             "<<endl;   
        cout<<"             "<<endl;  
        cout<<"             "<<endl;
        cout<<"             "<<endl;
        break;
    case 7:
        cout<<"_____________"<<endl;
        cout<<"|           |"<<endl;    
        cout<<"|            "<<endl;   
        cout<<"|            "<<endl;   
        cout<<"|            "<<endl;  
        cout<<"|            "<<endl;
        cout<<"|            "<<endl;
        break;
    case 6:
        cout<<"_____________"<<endl;
        cout<<"|           |"<<endl;    
        cout<<"|           0"<<endl;   
        cout<<"|            "<<endl;   
        cout<<"|            "<<endl;  
        cout<<"|            "<<endl;
        cout<<"|            "<<endl;
        break;
    case 5:
        cout<<"_____________"<<endl;
        cout<<"|           |"<<endl;    
        cout<<"|           0"<<endl;   
        cout<<"|           |"<<endl;   
        cout<<"|            "<<endl;  
        cout<<"|            "<<endl;
        cout<<"|            "<<endl;
        break;
    case 4:
        cout<<"_____________"<<endl;
        cout<<"|           |"<<endl;    
        cout<<"|           0"<<endl;   
        cout<<"|          /|"<<endl;   
        cout<<"|            "<<endl;  
        cout<<"|            "<<endl;
        cout<<"|            "<<endl;
        break;
    case 3:
        cout<<"_____________"<<endl;
        cout<<"|           |"<<endl;    
        cout<<"|           0"<<endl;   
        cout<<"|          /|\\"<<endl;   
        cout<<"|            "<<endl;  
        cout<<"|            "<<endl;
        cout<<"|            "<<endl;
        break;
    case 2:
        cout<<"_____________"<<endl;
        cout<<"|           |"<<endl;    
        cout<<"|           0"<<endl;   
        cout<<"|          /|\\"<<endl;   
        cout<<"|          / "<<endl;  
        cout<<"|            "<<endl;
        cout<<"|            "<<endl;
        break;
    case 1:
        cout<<"_____________"<<endl;
        cout<<"|           |"<<endl;    
        cout<<"|           0"<<endl;   
        cout<<"|          /|\\"<<endl;   
        cout<<"|          / \\"<<endl;  
        cout<<"|            "<<endl;
        cout<<"|            "<<endl;
        break;
    case 0:
        cout<<"_____________"<<endl;
        cout<<"|           |"<<endl;    
        cout<<"|          _0_"<<endl;   
        cout<<"|          /|\\"<<endl;   
        cout<<"|          / \\"<<endl;  
        cout<<"|            "<<endl;
        cout<<"|            "<<endl;
        break;
    default:
        cout<<"sistem fail"<<endl;
        break;
    }
}