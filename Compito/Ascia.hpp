//
//  Ascia.hpp
//  Compito
//
//  Created by Luca Masini on 19/06/21.
//

#ifndef Ascia_hpp
#define Ascia_hpp

#include <stdio.h>
#include <string>

#include "Pezzo.hpp"

using namespace std;

class Ascia  : public Pezzo {

private:
    string tipoLegno;
    
public:
    
    Ascia(bool d, string tipoLegno): Pezzo(d), tipoLegno(tipoLegno) {}

    std::string getTipoLegno() {
        return tipoLegno;
    }
    
};

#endif /* Ascia_hpp */
