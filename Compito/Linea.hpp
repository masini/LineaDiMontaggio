//
//  Linea.hpp
//  Compito
//
//  Created by Luca Masini on 19/06/21.
//

#ifndef Linea_hpp
#define Linea_hpp

#include <stdio.h>
#include <queue>

#include "Ascia.hpp"
#include "CassettoGrezzo.hpp"


using namespace std;

class Linea {

public:
    Linea(int n): numeroCassettiereGiornaliere(n) {}
    
    void addAscia(Ascia *ascia);
    Ascia *nextAscia();
    
    void addCassetto(CassettoGrezzo *cassetto);
    CassettoGrezzo *nextCassetto();
    
    void decrementaNumeroCassettiereGiornaliere() { numeroCassettiereGiornaliere-=1;}

private:
    int numeroCassettiereGiornaliere;
    
    queue<Ascia *> codaAsce;
    queue<CassettoGrezzo *> codaCassettiere;
};

#endif /* Linea_hpp */
