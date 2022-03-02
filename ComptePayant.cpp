#include"ComptePayant.h"
#include <iostream>

ComptePayant::ComptePayant()            
    {
    }

bool ComptePayant::retirerArgent(mad montant){

this->Compte::retirerArgent(montant);
this->Compte::retirerArgent(montant*0.5);

}

void ComptePayant::deposerArgent(mad montant)
 {
 this->Compte::deposerArgent(montant);
this->Compte::deposerArgent(montant*0.5);

 }

ComptePayant::~ComptePayant(){
cout<<"destructeur ComptePayant"<<endl;
}
