//Prototipação da classe JogadorDefesa.
//Includes.
#pragma once
#include <iostream>
#include "Jogador.hpp"
//classe.
class jogadorDefesa:public Jogador{
//atributos e métodos.
protected:
    int cobertura{},desarme{};
public:
    jogadorDefesa();
    jogadorDefesa(string nome,int idade,int habilidade,int gols,int camisa,int cobertura,int desarme);
    ~jogadorDefesa();
    int getHabilidade();
    int getCobertura();
    void setCobertura(int cobertura);
    int getDesarme();
    void setDesarme(int desarme);
    void print();
};