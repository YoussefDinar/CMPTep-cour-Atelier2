#include"Compte.h"
#include "Client.h"
#include "mad.h"
#include "Operation.h"
#include <iostream>
 using namespace std;
 int Compte::cpt = 0;
 Compte::Compte(Client nom, mad solde)
 {
 this->numCompte = ++Compte::cpt;
 this->nomProp = nom;
 this->solde = solde;
 this->Lop = vector<Operation*>(); 
 }


 bool Compte::retirerArgent(mad mad)
 {
 if(this->solde>= mad) {
 this->solde = this->solde - mad;
 return true;
 }
 else
 return false;
 }

 void Compte::deposerArgent(mad mad)
 {
 this->solde = this->solde + mad;
 }

 void Compte::afficher() const
 {

 mad AS = this->solde;
 cout<< "numCompte est"<< this->numCompte<< endl;
cout << "le solde est: " << this->solde<< endl;
 }

 bool Compte::transfererArgent(Compte &c, mad mad)
 {
 if(this->retirerArgent(mad) == true )
 {
 c.deposerArgent(mad);
 return true;
 }
 else
 return false;
 }

bool Compte::comparerCompte(const Compte  &c)const
 {
 bool res = strcmp(this->nomProp, c.nomProp);

if (this->numCompte == c.numCompte&& res == 0
&& this->solde == c.solde)
return true;
return false;
}


mad Compte::calcul_intr() const
{
    return this->solde;
}

void compte::histo() const
{
    for (int i = 0; i < this->Lop.size();i++) {
        this->Lop[i]->afficher();
    }
}

 Compte::~Compte()
 {
 cout << "destructeur Compte" << endl;

 }
