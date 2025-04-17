#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include "Item.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ShoppingCart {

private:
	vector<Item*> items;

public:
	void add(Item* item);
	string receipt() const;
};

#endif
