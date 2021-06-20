//
//  Pezzo.hpp
//  Compito
//
//  Created by Luca Masini on 19/06/21.
//

#ifndef Pezzo_hpp
#define Pezzo_hpp

#include <stdio.h>

class Pezzo {
private:
    bool difettoso;
    
public:
    Pezzo(bool d): difettoso(d) {}
    
    bool isDifettoso() {
        return difettoso;
    }
};

#endif /* Pezzo_hpp */
