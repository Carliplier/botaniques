#ifndef Plante_CPP
#define Plante_CPP

#include <iostream>
#include "Plante.h"

    void Plante::pousser(){}
    void Plante::manger(int mouches){}
    void Plante::soin(int hp)
    void Plante::afficher(){
        std::cout << _nom << " est une plante, elle a une taille de " 
                << _taille << "/100, une santé de "
                << _sante << "/100, et un niveau d'hydratation de " << _hydrat << "/100." << std::endl;
    }
    
    Plante::Plante(std::string name) : _nom(name), _taille(5), _sante(5), _hydrat(5)  {}

#endif