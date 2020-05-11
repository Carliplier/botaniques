#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <string>
#include "Botaniste.h"
#include "Plante.h"

// std::string _playerName;
  
  
    void Botaniste::fertiliser(Plante * cible){
        cible->pousser();
        _engrais-=3;
    }
    
    void Botaniste::tailler(Plante * cible){
        cible->soin(5);
    }
    
    void Botaniste::arroser(Plante * cible){
        cible->soin(10);
    }
   
    void Botaniste::inspecter(Plante * cible){
        cible->afficher();
    }
    
    void Botaniste::dormir(){
        //t+1 ;
    }
    
    void Botaniste::acheter_plante(){
         _argent-=10;
    }
    
    void Botaniste::vendre_plante(){
        _argent-=10;    
    }
    
    void Botaniste::acheter_engrais(){
        _argent-=5;
        _engrais+=5;    
    }
    
    
    Botaniste::Botaniste(std::string nomBotaniste): _botanisteName(nomBotaniste), _argent(50), _engrais(20) {}
    
#endif