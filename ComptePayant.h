#include "Compte.h"
#include "Client.h"
#include "Operation.h"
#include <iostream>
#include "mad.h"
#include <vector>


class ComptePayant : public Compte
 {
    public:
ComptePayant();
bool retirerArgent(mad montant)override;
void deposerArgent(mad montant)override;
 ~ComptePayant();    
};

