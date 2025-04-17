#include "PerishableItem.h"
#include <iostream>

using namespace std;


double PerishableItem::getTotalPrice() const {
	//present time > exp time price 0.0
	//else quantity * price 
	int currentYear = 2025;
	int currentDay = 17;
	int currentMonth = 4;

	if ((expirationYear < currentYear) or
		(expirationYear == currentYear and expirationMonth < currentMonth) or
		(expirationYear == currentYear and expirationMonth == currentMonth and expirationDay < currentDay)) {
		return 0.0;
	}
	else return getPrice() * getQuantity();
}

void PerishableItem::setExpiration(int year, int month, int day) {

	expirationDay = day;
	expirationMonth = month;
	expirationYear = year;
}