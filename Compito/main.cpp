//
//  main.cpp
//  Compito
//
//  Created by Luca Masini on 19/06/21.
//

#include <iostream>

#include "Linea.hpp"
#include "Montatore.hpp"
#include "Verniciatore.hpp"

int main(int argc, const char * argv[]) {
    
    Linea linea(100);
    
    linea.addAscia(new Ascia(false, "Noce"));
    linea.addAscia(new Ascia(false, "Pino"));
    linea.addAscia(new Ascia(true, "Noce"));
    linea.addAscia(new Ascia(false, "Pino"));
    linea.addAscia(new Ascia(false, "Castagno"));
    linea.addAscia(new Ascia(false, "Ulivo"));

    Montatore montatore("Cipputi", 56848);
    Verniciatore verniciatore("Leonardo", 10321);
    
    montatore.lavora(&linea);
    verniciatore.lavora(&linea);
    
    return 0;
}
