//Implementação da classe Time.
//includes.
#pragma once
#include "Time.hpp"
//Implementação dos métodos.
Time::Time(string nome){
    this->nome=nome;
}

Time::Time(){
    cout<<"Qual o nome do time?: ";
    cin>>nome;
}

string Time::getNome(){
    return this->nome;
}

void Time::getResultados(){
    cout<< "Vitorias: " << vitorias <<endl;
    cout<< "Derrotas: " << derrotas <<endl;
    cout<< "Empates: " << empates <<endl;
}

int Time::somaVitorias(){
    vitorias += 1;
    return vitorias;
}
int Time::somaDerrotas(){
    derrotas += 1;
    return derrotas;
}
int Time::somaEmpates(){
    empates += 1;
    return empates;
}