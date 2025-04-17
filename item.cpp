#include "Item.h"
#include <iostream>

using namespace std;
void Item::setName(string name) {
	this->name = name;
}
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

void Item::setPrice(double price) {
	this->price = price;
}

double Item::getTotalPrice() const {
	return quantity * price;
}