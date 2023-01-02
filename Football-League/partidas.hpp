//Prototipação da classe
//includes 
#pragma once

#include <iostream>
using namespace std;
//classe

class partidas{
    protected:
        string date;
        string timeCasa;       
        string timeVisitante;
        int placarCasa = 0;
        int placarVisitante = 0;
    public:
        partidas();
        partidas(string date, string timeCasa, string timeVisitante);
        ~partidas(){};
        string getCasa();
        string getVisitante();
        void getPlacar();
        string getDate();
        void setPlacarCasa(int gol);
        void setPlacarVisitante(int gol);
};
