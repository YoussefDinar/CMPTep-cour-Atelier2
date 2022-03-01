#include"Operation.h"
#include<iostream>
#include "DateH.h"
#include "mad.h"

int Operation::cpt = 0;

Operation::Operation(mad md,DateH dt,string lb)
{
 this->numop= ++Operation::cpt;
this->date=dt;
this->montant=md;
this->lib=lb;

}



void Operation::display()const{
cout<<this->date<<"||"<<this->numop<<"||"<<this->montant<<"||"<<this->lib<<endl;
}

Operation::~Operation(){

cout<<"destructeur Operation"<<endl;

}