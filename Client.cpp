#include"Client.h"
int Client::cpt = 0;


Client::Client(string nom,string pren, string adrs)      
{  
    std::cout << " constructeur de la classe Client" << std::endl;  
    this->mat = ++Client::cpt;
	this->nom = nom;
	this->prenom = pren;
    this->adresse = adrs;
    this->subor =  vector<Compte*>(); // taille=0  

}  

void Client::add_subor(Compte *C)  
{  

    this->subor.push_back(C);  

}  

Client::~Client()  

{  

    std::cout << " destructeur  de la classe Client" << std::endl;  

   this->subor.clear();  

}  