#ifndef ARCHIVIST_H
#define ARCHIVIST_H

#include <iostream>
#include <string>
#include <fstream>
#include "word.h"
using namespace std;

/*this class has somimes funtions:
-read .txt and extract the word.
-save name's player's in the .txt
-save the game
-load game
*/

class Lector{//the atribut in chage of arding and sctracting data
    friend class Archivist;
    private:
        ifstream myFile;
    public:
        Lector(const string &fileName);
        ~Lector();

  string leerArchivo();
};

class Archivist{/* that has the metodes of save game, 
load game and others methods of saved and loaded*/
    private:

    Word AhorcadoWord;//* instanse of call class word(the enlased list)

    public:
    void obtainLetters();//create word
    void showWord();//show word
    void searchLetter(char value);
};

#endif