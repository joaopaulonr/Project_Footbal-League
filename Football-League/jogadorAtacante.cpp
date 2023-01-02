//Implementação da classe jogadorAtacante.
//Includes.
#include "jogadorAtacante.hpp"
//Implementação dos métodos.
jogadorAtacante::jogadorAtacante():Jogador(){
    cout<<"Qual a velocidade do jogador?: ";
    cin>>velocidade;
    cout<<"Qual a técnica do jogador?: ";
    cin>>tecnica;
};
jogadorAtacante::jogadorAtacante(string nome,int idade,int habilidade,int gols,int camisa,int velocidade,float tecnica):Jogador(nome,idade,habilidade,gols,camisa){
    this->velocidade=velocidade;
    this->tecnica=tecnica;
}
jogadorAtacante::~jogadorAtacante(){};
int jogadorAtacante::getHabilidade(){
    auto habilidade{((Jogador::habilidade*5)+(velocidade*2)+(tecnica*3))/10};
    return habilidade;
}
int jogadorAtacante::getVelocidade(){
    return velocidade;
}
void jogadorAtacante::setVelocidade(int velocidade){
    this->velocidade=velocidade;
}
float jogadorAtacante::getTecnica(){
    return tecnica;
}
void jogadorAtacante::setTecnica(int tecnica){
    this->tecnica=tecnica;
}
void jogadorAtacante::print(){
    Jogador::print();
    cout<<"Velocidade: "<<velocidade<<'\n'<<"Técnica: "<<tecnica<<'\n';
}
