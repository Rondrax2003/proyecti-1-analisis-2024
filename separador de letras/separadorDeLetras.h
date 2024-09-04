#ifndef SEPARADORDELETRAS_H
#define SEPARADORDELETRAS_H
using namespace std;
#include <iostream>
#include <string>
#include <fstream>

class Lector{
    friend class Store;
    private:
        ifstream myFile;
    public:
        Lector(const string &fileName);
        ~Lector();

  string leerArchivo();
};

class Store{
    friend class Lector;

    private:

    public:
        void obtainLetters();
        void showList();
};



#endif