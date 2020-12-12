#pragma once
#include <string>
class lifo
{
private:
    lifo* next;
    lifo* previous;
    char* nom;
public:
    lifo(char* nom);
    ~lifo();
    lifo* Get_top();
    void add(lifo*);
    lifo* get();
    void affiche();
    void set(lifo*);
};