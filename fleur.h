#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include "Plante.h"

class Fleur : public Plante {

  
  public:
  
    void pousser();
    void soin(int hp);
    
    void afficher();
    Fleur(std::string name);
    
};

#endif