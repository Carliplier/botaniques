#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <iostream>
#include "Fleur.h"
#include "Plante.h"

    void Fleur::pousser(){
        _taille+=1;
        
    }
    
    void Fleur::soin(int hp){
        _sante+=1;
    }
    
    //if time = 10
    //if time = 15
    
    void Fleur::afficher(){
        std::cout << _nom << " est une fleur, elle a une taille de " 
                << _taille << "/100, une santé de "
                << _sante << "/100, et un niveau d'hydratation de " << _hydrat << "/100." << std::endl;
    }
    
    Fleur::Fleur(std::string name) : Plante(name) {}

#endif