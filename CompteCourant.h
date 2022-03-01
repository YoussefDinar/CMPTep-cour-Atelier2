 #pragma once

 #include "Compte.h"
#include "Client.h"
#include "mad.h"
#include <iostream>
using namespace std;


 class CompteCourant : public Compte
{
    
    private:
     mad decouvertMaxi;
    public:   
     CompteCourant(Client cmpt, mad soldeInitial, mad decouvertMaxi);    
     ~CompteCourant();
     void retirerArgent(mad montant)override;    

}

