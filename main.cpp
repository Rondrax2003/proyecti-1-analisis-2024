#include <iostream>
#include "archivist.h"
#include "word.h"
#include "ahorcado.h"

using namespace std;

int main(){
    /*Lector myLector("palabra.txt");
    myLector.ReadFile();//read txt and obtain word
    myLector.~Lector();//free memory

    Archivist myArchivist;//archivist 
    myArchivist.obtainLetters();//create list
    myArchivist.showWord();//show list
    myArchivist.searchLetter('l');*/

    Ahorcado myGame;
    myGame.menu();

    return 0;
}