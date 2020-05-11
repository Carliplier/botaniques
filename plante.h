#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
  protected:
    int _hydrat;
    int _sante;
    int _taille;
    std::string _nom;
  
  public:
  
    void virtual pousser();
    void virtual manger(int mouches);
    void virtual soin(int hp);
  
    void afficher();
    Plante(std::string name);
    
};

#endif