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

#include "Pezzo.hpp"

using namespace std;

class Linea {
public:
    Linea(int n): numeroCassettiereGiornaliere(n) {}
    
private:
    int numeroCassettiereGiornaliere;
    
    queue<Pezzo> codaAsce;
    queue<Pezzo> codaCassettiere;
    
};

#endif /* Linea_hpp */
