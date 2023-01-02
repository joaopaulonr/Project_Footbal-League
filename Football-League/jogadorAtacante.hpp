//Prototipação da classe JogadorAtacante.
//Includes.
#pragma once
#include <iostream>
#include "Jogador.hpp"
//classe.
class jogadorAtacante:public Jogador{
//atributos e métodos.
protected:
    int velocidade{},tecnica{};
public:
    jogadorAtacante();
    jogadorAtacante(string nome,int idade,int habilidade,int gols,int camisa,int velocidade,float tecnica);
    ~jogadorAtacante();
    int getHabilidade();
    int getVelocidade();
    void setVelocidade(int velocidade);
    float getTecnica();
    void setTecnica(int tecnica);
    void print();
};