#include <iostream>
#include "Chaton.h"
#include "Player.h"

int main()
{
    
    Fleur * flower = new Fleur("flower");
    flower->afficher();
    
    Carnivore * carni = new Fleur("carni");
    carni->afficher();
    
    
    Botaniste * myself = new Botaniste("ED");
    
    
    

    return 0;
}