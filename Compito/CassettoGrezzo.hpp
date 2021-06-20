//
//  CassettoGrezzo.hpp
//  Compito
//
//  Created by Luca Masini on 19/06/21.
//

#ifndef CassettoGrezzo_hpp
#define CassettoGrezzo_hpp

#include <stdio.h>
#include <string>

#include "Pezzo.hpp"
#include "Ascia.hpp"

using namespace std;

class CassettoGrezzo : public Pezzo {
public:
    CassettoGrezzo(Ascia *ascia, bool d): Pezzo(d), nomeModello("Cassetto di "+ascia->getTipoLegno()), tipoLegno(ascia) {}
    
    string getNomeModello() {
        return nomeModello;
    }
private:
    Ascia *tipoLegno;
    string nomeModello;
};

#endif /* CassettoGrezzo_hpp */
