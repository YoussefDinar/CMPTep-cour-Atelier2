#pragma once

class Devise{
private:
	double mt;
public:
	Devise();
	virtual void afficher() const=0;
	~Devise();
};
