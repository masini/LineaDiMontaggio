//
//  Operaio.hpp
//  Compito
//
//  Created by Luca Masini on 20/06/21.
//

#ifndef Operaio_hpp
#define Operaio_hpp

#include <stdio.h>
#include <string>

#include "Linea.hpp"

using namespace std;

class Operaio {
public:
    Operaio(std::string nomeCognome, int matricola): matricola(matricola), nomeCognome(nomeCognome) {}
    
    virtual void lavora(Linea *linea) = 0;
private:
    int matricola;
    string nomeCognome;
};

#endif /* Operaio_hpp */
