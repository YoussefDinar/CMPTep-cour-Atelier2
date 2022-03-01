#include "mad.h"

mad::mad() {
	this->mt = 0;
}

mad::mad(float m)
{
	this->mt = m;
}


void mad::afficher() const
{
	std::cout << this->mt << std::endl;
}

mad::~mad()
{
	std::cout <<"destructeur de la classe mad" << std::endl;
}