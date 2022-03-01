#pragma once
#include <iostream>
#include "Devise.h"
using namespace std;

class mad: public Devise
{ 
private:
	float mt;
public:
	mad();
	mad(float m);
	void afficher() const override;
	~mad();
};