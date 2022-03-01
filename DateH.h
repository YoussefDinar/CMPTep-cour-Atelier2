#pragma once

#include <iostream>
using  namespace std;
class DateH 
{
public: 
	DateH(int j, int m, int a);
	int maxDays() const;
	bool isbis() const;
	void print() const;
	

	~DateH(); 
private: 
	int jour; 
	int mois; 
	int annee;
};