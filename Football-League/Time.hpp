//Prototipação da classe Time
//Includes.
#pragma once
#include "Jogador.hpp"
#include "jogadorAtacante.hpp"
#include "jogadorDefesa.hpp"
#include "jogadorGoleiro.hpp"
#include <iostream>
#include <vector>
using namespace std;

//classe.
class Time{
protected:
    string nome;
    string jogador;
    int vitorias = 0;
    int derrotas = 0;
    int empates = 0;

public:
    vector<jogadorAtacante> jogadorataque;
    vector<jogadorDefesa> jogadordefesa;
    vector<jogadorGoleiro> jogadorgoleiro;
    Time();
    Time(string nome);
    ~Time(){};
    string getNome();
    void getResultados();
    string imprimeJogadores();
    int somaVitorias();
    int somaDerrotas();
    int somaEmpates();
};