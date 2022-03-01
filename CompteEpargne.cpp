#include"CompteEpargne.h"
#include<iostream>
using namespace std;
   


    CompteEpargne::CompteEpargne(Client cmpt,  mad soldeInitial,  mad leTauxInteret) 
            {
        if(leTauxInteret>=0 && leTauxInteret<=100)
        this->tauxInteret = leTauxInteret;
    }

   
mad CompteEpargne::calcul_intr() const
    {
  mad tmp;
  tmp = this->compte::calcul_intr() * (1 - this->tauxInteret);
    return tmp;
    }


bool CompteEpargne::retirerArgent(mad montant){
 mad tmp= this->compte::calcul_intr();
    if (tmp> montant && montant <(tmp/2)) {
        return true;
    }
    return false;



}

CompteEpargne::~CompteEpargne(){

     cout<<"destructeur CompteEpargne"<<endl;
}