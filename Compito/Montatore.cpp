//
//  Montatore.cpp
//  Compito
//
//  Created by Luca Masini on 20/06/21.
//

#include <iostream>

#include "Montatore.hpp"

using namespace std;

void aspettaTempoLavorazione() {
    
}

void pausa() {
    
}

void Montatore::lavora(Linea *linea) {
    
    pausa();
    
    Ascia *nextAscia = linea->nextAscia();
    
    if( nextAscia==NULL ) {
        cout << "nessuna ascia disponibile !\n";
        return;
    }
            
    aspettaTempoLavorazione();
    
    linea->addCassetto(new CassettoGrezzo(nextAscia, false));
}

