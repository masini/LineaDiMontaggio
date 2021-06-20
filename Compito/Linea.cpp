//
//  Linea.cpp
//  Compito
//
//  Created by Luca Masini on 19/06/21.
//

#include <iostream>

#include "Linea.hpp"

using namespace std;

void Linea::addCassetto(CassettoGrezzo *cassetto) {
    codaCassettiere.push(cassetto);
}

void Linea::addAscia(Ascia *ascia) {
    codaAsce.push(ascia);
}

CassettoGrezzo *Linea::nextCassetto() {
    CassettoGrezzo* foundCassetto = NULL;
    
    while (!codaCassettiere.empty())
    {
        CassettoGrezzo *nextCassetto = codaCassettiere.front();
        
        if( !nextCassetto->isDifettoso() ) {
            std::cout << "trovata cassettiera: " << nextCassetto->getNomeModello() << "\n";
            foundCassetto = nextCassetto;
            break;
        }
        
        codaCassettiere.pop();
    }

    return foundCassetto;
}

Ascia* Linea::nextAscia(){
    
    Ascia* foundAscia = NULL;
    
    while (!codaAsce.empty())
    {
        Ascia *nextAscia = codaAsce.front();
        
        if( !nextAscia->isDifettoso() ) {
            std::cout << "trovata ascia: " << nextAscia->getTipoLegno() << "\n";
            foundAscia = nextAscia;
            break;
        }
        
        codaAsce.pop();
    }

    return foundAscia;
}
