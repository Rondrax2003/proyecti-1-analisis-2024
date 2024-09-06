#ifndef WORD_H
#define WORD_H
using namespace std;

class Letter //name of node
{
    friend class Word;
private:
    char data;
    Letter* next;
    Letter* prior;
public:
    Letter(char value);
};

class Word //name of list
{
    friend class Letter;
private:
    Letter* start;
    Letter* end;
    int size;
public:
    Word();
    void insertLetter(char value);
    void searchLetter(char value);//function encarget of sear letter during the game
    void showWord();
};

#endif