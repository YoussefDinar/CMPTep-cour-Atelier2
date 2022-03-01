#include "Compte.h"
#include "Client.h"
#include<iostream>
#include "mad.h"
using namespace std;
 class CompteEpargne : public Compte
{
    private:
    mad tauxInteret;
    public:
     CompteEpargne(Client cmpt,  mad soldeInitial, mad leTauxInteret);
bool retirerArgent(mad montant)override;    
  mad calcul_intr() const override; 
    ~CompteEpargne(); 
    
    }
   



