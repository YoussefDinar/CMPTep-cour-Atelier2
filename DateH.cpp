#include "DateH.h"

DateH::DateH(int h, int min, int sec, int j, int m, int a)
{
    this->annee = (a > 1900) ? a : 1900;
    this->mois = (m>0 && m<13) ? m : 1;
    this->jour = (j > 0 && j <= this->maxDays()) ? j : 1;
}

int DateH::maxDays() const
{
    int maxjour;

    if (this->mois == 2) {
        maxjour = (this->isbis()) ? 29 : 28;
    }
    else {
       
    maxjour = ((this->mois > 7 && this->mois % 2 == 1)
            || (this->mois < 7 && this->mois % 2 == 0)) ? 30 : 31;

    }
    return maxjour;
}

bool DateH::isbis() const
{
    /*if (this->annee % 4 == 0) {
        return true;
    }

    return false;*/
    return (this->annee % 4 == 0);
}

void DateH::print() const
{
    //demasquage
    std::cout << this->jour << "/" << this->mois << "/" << this->annee << std::endl;
}




DateH::~DateH()
{
    std::cout << "destructeur de la classe DateH" << std::endl;
}