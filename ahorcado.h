#ifndef AHORCADO_H
#define AHORCADO_H
#include <string>
#include "archivist.h"
#include "word.h"
using namespace std;

class Ahorcado{
private:
    string player1;
    string player2;
    Word ahorcadoWord;
    Archivist KarenArchivist;
public:
    void newGame();
    void LoadGame();
    void Draw();
    void clearTerminal();
    int menu();

};

#endif