//Implementação da classe jogadorDefesa.
//includes.
#include "jogadorDefesa.hpp"
//implementação dos métodos.
jogadorDefesa::jogadorDefesa():Jogador(){
    cout<<"Qual a cobertura do jogador?: ";
    cin>>cobertura;
    cout<<"Qual o desarme do jogador?: ";
    cin>>desarme;
};
jogadorDefesa::jogadorDefesa(string nome,int idade,int habilidade,int gols,int camisa,int cobertura,int desarme):Jogador(nome,idade,habilidade,gols,camisa){
    this->cobertura=cobertura;
    this->desarme=desarme;
}
jogadorDefesa::~jogadorDefesa(){}
int jogadorDefesa::getHabilidade(){
    auto habilidade{((Jogador::habilidade*5)+(cobertura*3)+(desarme*2))/10};
    return habilidade;
}
int jogadorDefesa::getCobertura(){
    return cobertura;
}
void jogadorDefesa::setCobertura(int cobertura){
    this->cobertura=cobertura;
}
int jogadorDefesa::getDesarme(){
    return desarme;
}
void jogadorDefesa::setDesarme(int desarme){
    this->desarme=desarme;
}
void jogadorDefesa::print(){
    Jogador::print();
    cout<<"Cobertura: "<<cobertura<<'\n'<<"Desarme: "<<desarme<<'\n';
}