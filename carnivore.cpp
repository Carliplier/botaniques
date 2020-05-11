#ifndef CARNIVORE_CPP
#define CARNIVORE_CPP

#include <iostream>
#include "CARNIVORE_CPP.h"
#include "Plante.h"


  
    void Carnivore::pousser(){
        _taille+=1;
        
    }
    
    void Carnivore::manger(int mouches){
        _faim-=mouches;
        if(_faim<0) _faim=0;
        _sante+=5;
        
    }
    void Carnivore::soin(int hp){
        _sante+=1;
    }
    

    void Carnivore::afficher(){
        std::cout << _nom << " est une plante carnivore, elle a une taille de " 
                << _taille << "/100, une santé de "
                << _sante << "/100, et un niveau d'hydratation de " << _hydrat << "/100." << std::endl;
    }
    
    Carnivore::Carnivore(std::string name) : Plante(name) {}

#endif