//Implementação da classe partidas.
//Includes

#include "partidas.hpp"

//Implementação.

partidas::partidas(){
    cout << "Qual vai ser a data da partida? : ";
    cin >> date;
    cout << "Qual o time da casa? : ";
    cin >> timeCasa;
    cout << "Qual o time visitante? : ";
    cin >> timeVisitante;
}

partidas::partidas(string date, string timeCasa, string timeVisitante){
    this->date = date;
    this->timeCasa = timeCasa;
    this->timeVisitante = timeVisitante;
}

//Getters and setters

void partidas::setPlacarCasa(int gol){
    placarCasa=gol;
}

void partidas::setPlacarVisitante(int gol){
    placarVisitante=gol;
}

string partidas::getCasa(){
    return timeCasa;
}

string partidas::getVisitante(){
    return timeVisitante;
}

string partidas::getDate(){
    return date;
}

void partidas::getPlacar(){
    cout << "Data: " << date << "\n" << timeCasa << " " << placarCasa << " x " << placarVisitante << " " << timeVisitante << endl;
}
