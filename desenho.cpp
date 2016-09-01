#include "desenho.h"
#include "jarro.h"
#include <stdio.h>

void Desenho::Desenhar(Jarro oJarro1, Jarro oJarro2)
{
    ///////////////
    for (int i=0; i<oJarro1.get_Tamanho();i++){
        if(oJarro1.get_Qnt_agua()==oJarro1.get_Tamanho()-i){
            cout<< (" |-----|");
        }else{
            if (i+1==oJarro1.get_Tamanho()){
                cout<< (" |_____|");
            }else{
                cout<< (" |     |");
            }
        }
        if (oJarro1.get_Tamanho()-i<=oJarro2.get_Tamanho()){
            if(oJarro2.get_Qnt_agua()==oJarro1.get_Tamanho()-i){
                cout<< ("     |-----|");
            }else{
                if (i+1==oJarro1.get_Tamanho()){
                    cout<< ("     |_____|");
                }else{
                    cout<< ("     |     |");
                }
            }

        }
        cout<<"\n";
    }

}
Desenho::Desenho(Jarro oJarro1, Jarro oJarro2)
{
    ///////////////
    for (int i=0; i<oJarro1.get_Tamanho();i++){
        if(oJarro1.get_Qnt_agua()==oJarro1.get_Tamanho()-i){
            cout<< (" |-----|");
        }else{
            if (i+1==oJarro1.get_Tamanho()){
                cout<< (" |_____|");
            }else{
                cout<< (" |     |");
            }
        }
        if (oJarro1.get_Tamanho()-i<=oJarro2.get_Tamanho()){
            if(oJarro2.get_Qnt_agua()==oJarro1.get_Tamanho()-i){
                cout<< ("     |-----|");
            }else{
                if (i+1==oJarro1.get_Tamanho()){
                    cout<< ("     |_____|");
                }else{
                    cout<< ("     |     |");
                }
            }

        }
        cout<<"\n";
    }
    printf("Jarro1: %dL e Jarro2: %dL \n",oJarro1.get_Tamanho(),oJarro2.get_Tamanho());


}

