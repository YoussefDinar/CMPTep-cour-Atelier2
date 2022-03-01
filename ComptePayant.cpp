#include"ComptePayant.h"
#include <iostream>

ComptePayant::ComptePayant()            
    {
    }

bool ComptePayant::retirerArgent(float montant){

this->Compte::retirerArgent(montant);
this->Compte::retirerArgent(montant*0.5);

}

void ComptePayant::deposerArgent(double montant)
 {
 this->Compte::deposerArgent(montant);
this->Compte::deposerArgent(montant*0.5);

 }

ComptePayant::~ComptePayant(){
cout<<"destructeur ComptePayant"<<endl;
}
