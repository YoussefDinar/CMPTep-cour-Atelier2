#pragma once
#include <iostream>
#include <vector>
#include "Compte.h"
using namespace std;

class Client : public Compte  

{  

public:   

    Client(string nom,string pr, string adr);  

    void add_cl(Compte *C);  

    ~Client();  

private:   
    int mat;
	static int cpt;
	string nom;
	string prenom;
	string adresse;
    List<Compte*> subor;   

};  