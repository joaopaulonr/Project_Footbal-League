#pragma once
#include <iostream>
#include "colorsAndEmoji.hpp"

using namespace std;
//classe.
class menus{
    public:
        int static menuPrincipal();
        int static menuJogador();
        int static menuListJogador();
        int static menuDeleteJogador();
        int static menuTime();
        int static menuAddJogadoresTime();
        int static menuPartida();
        int static menuDadosG();
};

int menus::menuPrincipal(){
    cout << " " << endl;
    cout << "------ " << hey::yellown << "MENU PRINCIPAL" << hey::off << " ------ " << endl;
    cout << "|   Opção 1 - Jogadores    |" << endl;
    cout << "|   Opção 2 - Times        |" << endl;
    cout << "|   Opção 3 - Partidas     |" << endl;
    cout << "|   Opção 4 - Sair         |" << endl;
    cout << "---------------------------- " << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
};

int menus::menuJogador(){
    cout << " " << endl;
    cout << "------- " << hey::greenn << "CRIAÇÃO DO JOGADOR" << hey::off << " ------- " << endl;
    cout << "|   Opção 1 - Jogador atacante   |" << endl;
    cout << "|   Opção 2 - Jogador defensor   |" << endl;
    cout << "|   Opção 3 - Goleiro            |" << endl;
    cout << "|   Opção 4 - Exibir jogador     |" << endl; 
    cout << "|   Opção 5 - Remover jogador    |" << endl;
    cout << "|   Opção 6 - Sair               |" << endl;
    cout << "---------------------------------- " << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
};

int menus::menuTime(){
    cout << " " << endl;
    cout << "--------- " << hey::green << "CRIAÇÃO DE TIME" << hey::off << " --------" << endl;
    cout << "|   Opção 1 - Criar time         |" << endl;   
    cout << "|   Opção 2 - Formar time        |" << endl; 
    cout << "|   Opção 3 - Excluir time       |" << endl;
    cout << "|   Opção 4 - Exibir todos times |" << endl; // mostrar tds os times
    cout << "|   Opção 5 - Exibir time        |" << endl;  // exibir time especifico com atributos e jogadores
    cout << "|   Opção 6 - Sair               |" << endl;
    cout << "----------------------------------" << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
};

int menus::menuPartida(){
    cout << " " << endl;
    cout << "--------- " << hey::cyann << "CRIAR PARTIDA" << hey::off << " -------- " << endl;
    cout << "|   Opção 1 - Criar partida    |" << endl;
    cout << "|   Opção 2 - Exibir partidas  |" << endl;
    cout << "|   Opção 3 - Sair             |" << endl;
    cout << "--------------------------------" << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
}

int menus::menuListJogador(){
    cout << " " << endl;
    cout << "------------ " << hey::grayn << "LISTAR JOGADOR" << hey::off << " ----------- " << endl;
    cout << "|  Opção 1 - Listar Jogador atacante  |" << endl;
    cout << "|  Opção 2 - Listar Jogador defensor  |" << endl;
    cout << "|  Opção 3 - Listar Goleiro           |" << endl;
    cout << "|  Opção 4 - Sair                     |" << endl;
    cout << "--------------------------------------- " << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
};
int menus::menuDeleteJogador(){
    cout << " " << endl;
    cout << "------------ " << hey::redn << "DELETAR JOGADOR" << hey::off << " ----------- " << endl;
    cout << "|  Opção 1 - Deletar Jogador atacante  |" << endl;
    cout << "|  Opção 2 - Deletar Jogador defensor  |" << endl;
    cout << "|  Opção 3 - Deletar Goleiro           |" << endl;
    cout << "|  Opção 4 - Sair                      |" << endl;
    cout << "---------------------------------------- " << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;  
};
int menus::menuAddJogadoresTime(){
    cout << " " << endl;
    cout << "------------ " << hey::bluen << "ADICIONAR JOGADOR" << hey::off << " ----------- " << endl;
    cout << "|  Opção 1 - Adicionar Jogador atacante  |" << endl;
    cout << "|  Opção 2 - Adicionar Jogador defensor  |" << endl;
    cout << "|  Opção 3 - Adicionar Goleiro           |" << endl;
    cout << "|  Opção 4 - Sair                        |" << endl;
    cout << "------------------------------------------" << endl;
    cout << " " << endl;
    int opcao;
    cin >> opcao;
    return opcao;
};

// int menus::menuDadosG(){ // ainda n implementado na main
//     cout << " " << endl;
//     cout << "----------------- " << hey::bluen << "DADOS GERAIS" << hey::off << " ---------------- " << endl;
//     cout << "|  Opção 1 - Inserir um nome para a pesquisa  |" << endl;
//     cout << "|  Opção 2 - Sair                             |" << endl;
//     cout << "----------------------------------------------- " << endl;
//     cout << " " << endl;
//     int opcao;
//     cin >> opcao;
//     return opcao;
// }
