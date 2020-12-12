#include "lifo.h"
#include <iostream>

using namespace std;


lifo::lifo(std::string nom) {
this->nom = nom;
}

void lifo::add(lifo* fif) {
    lifo* temp = this->Get_top();
    temp->next = fif;
    fif->previous = temp;
}

lifo* lifo::get() {
    lifo* temp = this->Get_top();
    lifo* temp2 = temp->previous;
    temp2->next = nullptr;
    this->set(temp2);
    return temp;
}

void lifo::set(lifo* f) {
    this->next = f->next;
    this->nom = f->nom;
    this->previous = f->previous;
}

lifo* lifo::Get_top() {
    lifo* temp = this;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    return temp;
}


void lifo::affiche() {
    cout << "Affichage tas" << endl;
    lifo* temp = this->Get_top();
    while (temp->previous != nullptr)
    {
        cout << "Pile:" << temp->nom << endl;
        temp = temp->previous;
    }
    cout << "Pile:" << temp->nom << endl;
    cout << endl;

}