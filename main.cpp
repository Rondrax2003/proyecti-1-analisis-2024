#include <iostream>
#include "archivist.h"
#include "word.h"

using namespace std;

int main(){
    Lector myLector("palabra.txt");
    myLector.leerArchivo();//read txt and obtain word
    myLector.~Lector();//free memory

    Archivist myArchivist;//archivist 
    myArchivist.obtainLetters();//create list
    myArchivist.showWord();//show list

    return 0;
}