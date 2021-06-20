//
//  Verniciatore.hpp
//  Compito
//
//  Created by Luca Masini on 20/06/21.
//

#ifndef Verniciatore_hpp
#define Verniciatore_hpp

#include <stdio.h>
#include <string>

#include "Operaio.hpp"

using namespace std;

class Verniciatore: public Operaio {
public:
    Verniciatore(string nomeCognome, int matricola): Operaio(nomeCognome, matricola) {}
    
};
#endif /* Verniciatore_hpp */
