#pragma once
#include "DateH.h"
#include <iostream>
#include "mad.h"
using namespace std;

class Operation  {
    private:
    int numop;
    static int cpt;
    DateH date;
    mad montant;
    string lib;
    public: 
    Operation(mad m,DateH dt,string lb);
    void display()const;
    ~Operation();
}
