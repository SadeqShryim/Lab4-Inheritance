#ifndef TAXABLEITEM_H
#define TAXABLEITEM_H

#include "Item.h"
#include <ctime>
using namespace std;


class TaxableItem: public Item {

private:
	double taxRate;

public:
	void setTaxRate(double rate);
	double getTotalPrice() const;

};

#endif
