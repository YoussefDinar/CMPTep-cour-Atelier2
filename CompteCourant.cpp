#include"CompteCourant.h"
#include "mad.h"
#include<iostream>
  using namespace std;
     CompteCourant::CompteCourant(Client cmpt, mad soldeInitial,  mad decouvertMaxi)
        : Compte(cmpt,soldeInitial) 
    {
        this->decouvertMaxi = decouvertMaxi;
    }

    void  CompteCourant::retirerArgent(mad montant)
    
    {
        if (Solde - montant >= decouvertMaxi)
            Solde -= montant;
    }

CompteCourant::~CompteCourant(){

    cout<<"destructeur CompteCourant"<<endl;
}