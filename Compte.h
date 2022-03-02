#pragma once
#include <vector>
#include "Client.h"
#include "Operation.h"
#include "Devise.h"
#include "mad.h"
using namespace std;

class Compte 
 {
  private:
static int cpt;
 int numCompte; 
 Client nomProp;
 mad solde;
vector<Operation*> Lop;

    public:
Compte(Client nom, mad solde);
bool retirerArgent(mad montant);
void deposerArgent(mad montant);
void afficher() const;
void histo() const;
bool transfererArgent(Compte &c, mad montant);
 bool comparerCompte(const Compte &c) const;
 ~Compte(); // destructeur
 mad calcul_intr() const;

};
