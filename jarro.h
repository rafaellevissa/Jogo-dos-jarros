#ifndef JARRO_H
#define JARRO_H
#include <iostream>
using namespace std;
class Jarro
{
private:
    int Tamanho;
    int Qnt_agua;
    string Nome;
public:
    int get_Tamanho ();
    int get_Qnt_agua ();
    string get_Nome ();
    void set_Tamanho (int Tamanho_jarro);
    void set_Qnt_agua (int Qnt_agua_Jarro);
    void set_Nome (string Nome_jarro);
    Jarro (string Nome_jarro,int Tamanho_jarro,int Qnt_agua_Jarro);
    ~Jarro ();

};
#endif // JARRO_H
