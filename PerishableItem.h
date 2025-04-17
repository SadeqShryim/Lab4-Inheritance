#ifndef PERISHABLEITEM_H
#define PERISHABLEITEM_H

#include "Item.h"

using namespace std;


class PerishableItem: public Item {

private:
	int expirationYear;
	int expirationMonth;
	int expirationDay;

public:
	double getTotalPrice() const;
	void setExpiration(int year, int month, int day);

};

#endif
