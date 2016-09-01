#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
#include "jarro.h"
using namespace std;
class Jogador
{
private:
    string Nome;
    int movimentos;
public:
    int get_movimentos ();
    string get_Nome ();
    void set_Movimentos (int qnt_movimentos);
    void set_Nome (string Nome_jogador);
    Jarro Encher (Jarro oJarro);
    Jarro Esvaziar (Jarro oJarro);
    void Trocar (Jarro* j1,Jarro* j2);
    Jogador (string Nome_jogador,int movimentos);
    ~Jogador ();
};
#endif // JOGADOR_H
