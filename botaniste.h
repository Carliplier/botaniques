#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include "Plante.h"

class Botaniste{
  private:
    std::string _botanisteName;
    int argent;
    int engrais;
  
  public:
  
    void fertiliser(Plante * cible);
    void tailler(Plante * cible);
    void arroser(Plante * cible);
    void inspecter(Plante * cible);
    
    void dormir();
    void acheter_plante();
    void vendre_plante();
    void acheter_engrais();
    
    
    Botaniste(std::string nomPlayer);
    
};

#endif