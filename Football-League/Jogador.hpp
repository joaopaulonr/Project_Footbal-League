//Prototipação da classe Jogador
//Includes.
#pragma once
#include <iostream>
using namespace std;
//classe.
class Jogador{
//atributos e métodos.
protected:
    string nome{};
    int idade{},habilidade{},gols{},camisa{};
public:
    Jogador();
    Jogador(string nome,int idade,int habilidade,int gols,int camisa);
    ~Jogador();
    string getNome();
    void setNome(string nome);
    int getIdade();
    void setIdade(int idade);
    int getHabilidade();
    void setHabilidade(int habilidade);
    int getGols();
    void setGols(int gols);
    int getCamisa();
    void setCamisa(int camisa);
    int somaGols();
    void print();
};