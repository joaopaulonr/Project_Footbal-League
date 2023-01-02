//Implementação da classe jogadorGoleiro.
//Includes.
#include "jogadorGoleiro.hpp"
//Implementação dos métodos. 
jogadorGoleiro::jogadorGoleiro():Jogador(){
    cout<<"Qual os reflexos do jogador?: ";
    cin>>reflexos;
    cout<<"Qual a altura do jogador?: ";
    cin>>altura;
};
jogadorGoleiro::jogadorGoleiro(string nome,int idade,int habilidade,int gols,int camisa,int reflexos,float altura):Jogador(nome,idade,habilidade,gols,camisa){
    this->reflexos=reflexos;
    this->altura=altura;
}
jogadorGoleiro::~jogadorGoleiro(){}
int jogadorGoleiro::getHabilidade(){
    auto habilidade{((Jogador::habilidade*5)+((static_cast<int>((altura*100)))*2)+(reflexos*3))/10};
    return habilidade;
}
int jogadorGoleiro::getReflexos(){
    return reflexos;
}
void jogadorGoleiro::setReflexos(int reflexos){
    this->reflexos=reflexos;
}
float jogadorGoleiro::getAltura(){
    return altura;
}
void jogadorGoleiro::setAltura(float altura){
    this->altura=altura;
}
void jogadorGoleiro::print(){
    Jogador::print();
    cout<<"Reflexos: "<<reflexos<<'\n'<<"Altura: "<<altura<<'\n';
}