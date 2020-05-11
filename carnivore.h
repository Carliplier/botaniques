#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include "Plante.h"

class Carnivore : public Plante {

  
  public:
  
    void pousser();
    void manger(int mouches);
    
    void afficher();
    Carnivore(std::string name);
    
};

#endif