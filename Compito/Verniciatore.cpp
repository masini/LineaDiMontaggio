//
//  Verniciatore.cpp
//  Compito
//
//  Created by Luca Masini on 20/06/21.
//

#include "Verniciatore.hpp"

#include <iostream>

using namespace std;

bool hasColoreGiusto(CassettoGrezzo *cassettoGrezzo) {
    return true;
}

void Verniciatore::lavora(Linea *linea) {
    CassettoGrezzo *cassettoGrezzo = linea->nextCassetto();
    
    if( hasColoreGiusto(cassettoGrezzo) ) {
        linea->decrementaNumeroCassettiereGiornaliere();
        cout << "Terminata Cassettiera " << cassettoGrezzo->getNomeModello() << "\n";
    } else {
        cout << "Impossibile verniciare cassetto\n";
    }
}
