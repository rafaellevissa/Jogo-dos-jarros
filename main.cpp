#include <iostream>
#include "jarro.h"
#include "jogador.h"
#include "desenho.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "Jogo dos jarros" << endl;

    string Jogador1;
    int opcao=0;
    int opcao2=0;
    int ponto_best=1000;
    int jogada=0;
    int capacidade_j1=5;
    int capacidade_j2=3;
    int objetivo=4;
    Jogador1="           ";
    string Jogador_best= "PC";
    while(opcao!=3){
    system("clear");

    cout<<("------Jogo dos JARROS-----\n");
    printf("Melhor Jogador: %s com %d jogadas\n",Jogador_best.c_str(),ponto_best);
    cout<<("Menu:\n");
    cout<<("1- Jogar\n");
    cout<<("2- Opções\n");
    cout<<("3- Sair\n");

    cin>>opcao;

    if(opcao==1){
            printf("Objetivo: encher um dos jarros com %d litros\n",objetivo);
            cout<<("Digite o nome do Jogador:\n");
            cin>>Jogador1;
            //criar os objetos
            Jogador *player1 = new Jogador(Jogador1, 0);

            Jarro   *j1 = new Jarro("1",capacidade_j1,0);
            Jarro   *j2 = new Jarro("2",capacidade_j2,0);
            string op;

            Desenho *d=new Desenho(*j1,*j2);

            int jarro_selecionado;
            while(j1->get_Qnt_agua()!=objetivo && j2->get_Qnt_agua()!=objetivo){
                jogada++;
                cout<<("Qual jarro deseja escolher?\n");
                cin>>jarro_selecionado;
                cout<<("Qual ação deseja?\n");
                cout<<("(E)ncher, E(s)vaziar, (T)rocar\n");
                cin>>op;
                if (jarro_selecionado==1){                    
                    if (op.compare("E")==0||op.compare("e")==0){
                        *j1=player1->Encher(*j1);

                    }else if(op.compare("s")==0||op.compare("S")==0){
                        *j1=player1->Esvaziar(*j1);
                    }else if(op.compare("T")==0||op.compare("t")==0){
                        player1->Trocar(j1, j2);
                    }else{
                        cout<<"problema ao escolher a opção"<<endl;
                    }
                }else if (jarro_selecionado==2){
                    if (op.compare("E")==0||op.compare("e")==0){
                        *j2=player1->Encher(*j2);
                    }else if(op.compare("s")==0||op.compare("S")==0){
                        *j2=player1->Esvaziar(*j2);
                    }else if(op.compare("T")==0||op.compare("t")==0){
                        player1->Trocar(j2, j1);
                    }else{
                        cout<<"problema ao escolher a opção"<<endl;
                    }
                }
                d->Desenhar(*j1,*j2);
                printf("Jarro1 com %dL e Jarro2 com %dL \n",j1->get_Qnt_agua(),j2->get_Qnt_agua());

            }
            printf("Parabéns! %s você venceu com %d jogadas!\n\n", Jogador1.c_str(),jogada);
            if(jogada<=ponto_best){
                ponto_best=jogada;
                Jogador_best=Jogador1;
            }
            sleep(3);
    }else if(opcao==2){
        while (opcao2!=3){
            system("clear");
            cout<<("1- Alterar jarros\n");
            cout<<("2- Alterar objetivo\n");
            cout<<("3- Retornar ao menu principal\n");
            cin>>opcao2;
            if (opcao2==1){
                cout<<("Digite o tamanho do jarro maior:\n");
                cin>>capacidade_j1;
                cout<<("Digite o tamanho do jarro menor:\n");
                cin>>capacidade_j2;
            }else if (opcao2==2){
                cout<<("Digite o valor de agua que será o objetivo:\n");
                cin>>objetivo;
            }
        }
    }else if(opcao==3){
        cout<<"Obrigado por jogar!\n";
    }else{
        cout<<"opção inválida!";
    }

    }
    return 0;
}
