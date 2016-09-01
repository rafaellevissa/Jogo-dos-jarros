#include "jarro.h"
#include <iostream>
using namespace std;

int Jarro::get_Tamanho (){
   return this->Tamanho;
}
int Jarro::get_Qnt_agua (){
     return this->Qnt_agua;
}
string Jarro::get_Nome (){
 return this->Nome;
}
void Jarro::set_Tamanho (int Tamanho_jarro){
    this->Tamanho=Tamanho_jarro;
}
void Jarro::set_Qnt_agua (int Qnt_agua_Jarro){
    this->Qnt_agua=Qnt_agua_Jarro;
}
void Jarro::set_Nome (string Nome_jarro){
    this->Nome=Nome_jarro;
}
Jarro::~Jarro (){

}
Jarro::Jarro (string Nome_jarro,int Tamanho_jarro,int Qnt_agua_Jarro){
    this->Tamanho=Tamanho_jarro;
    this->Qnt_agua=Qnt_agua_Jarro;
    this->Nome=Nome_jarro;
    cout<<"jarro construido!"<<endl;
}


