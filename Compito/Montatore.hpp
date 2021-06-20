//
//  Montatore.hpp
//  Compito
//
//  Created by Luca Masini on 20/06/21.
//

#ifndef Montatore_hpp
#define Montatore_hpp

#include <stdio.h>
#include <string>

#include "Operaio.hpp"

using namespace std;

class Montatore: public Operaio {
public:
    Montatore(string nomeCognome, int matricola): Operaio(nomeCognome, matricola) {}
    void lavora(Linea *linea);
};

#endif /* Montatore_hpp */
