#include "Item.h"
#include <iostream>

using namespace std;

string Item::getName() const {
	return name;
}

int Item::getQuantity() const {
	return quantity;
}

double Item::getPrice() const {
	return price;
}

void Item::setQuantity(int quantity) {
	this->quantity = quantity;
}

void Item::setPricce(double price) {
	this->price = price;
}

double Item::getTotalPrice() const {
	return quantity * price;
}