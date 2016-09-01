#include "jogador.h"
#include <iostream>
#include "jarro.h"
#include <stdio.h>
using namespace std;

int Jogador::get_movimentos (){
    return this->movimentos;
}
string Jogador::get_Nome (){
    return this->Nome;
}
void Jogador::set_Movimentos (int qnt_movimentos){
    this->movimentos=qnt_movimentos;
}
void Jogador::set_Nome (string Nome_jogador){
    this->Nome=Nome_jogador;
}
Jarro Jogador::Encher (Jarro oJarro){
    int volume_total;
        volume_total=oJarro.get_Tamanho();
        oJarro.set_Qnt_agua(volume_total);
        return oJarro;
}
Jarro Jogador::Esvaziar (Jarro oJarro){
oJarro.set_Qnt_agua(0);
return oJarro;
}
void Jogador::Trocar (Jarro* oJarro1, Jarro* oJarro2){
    int volume1, volume2, tamanho1, tamanho2, resto1;
        volume1=oJarro1->get_Qnt_agua();
        volume2=oJarro2->get_Qnt_agua();
        tamanho1=oJarro1->get_Tamanho();
        tamanho2=oJarro2->get_Tamanho();
        if (volume1>0){
            if(tamanho2-volume2>=volume1){
                oJarro2->set_Qnt_agua(volume2+volume1);
                oJarro1->set_Qnt_agua(0);
            }else{
                resto1=volume1-(tamanho2-volume2);
                oJarro1->set_Qnt_agua(resto1);
                oJarro2->set_Qnt_agua(tamanho2);
            }
        }
}

Jogador::Jogador (string Nome_jogador,int movimentos){
    this->Nome=Nome_jogador;
    this->movimentos=movimentos;
    cout<<"Jogador construido!"<<endl;
}
Jogador::~Jogador (){
    cout<<"Jogador destruido!"<<endl;
}
