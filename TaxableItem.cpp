#include "TaxableItem.h"

using namespace std;

void TaxableItem::setTaxRate(double rate) {
	rate > 1.0 ? taxRate = rate / 100.0 : taxRate = rate;
}

double TaxableItem::getTotalPrice() const {
	return getQuantity() * getPrice() * (taxRate + 1);
}