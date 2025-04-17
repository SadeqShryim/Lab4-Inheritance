#include <iostream>
#include <string>
#include "Item.h"
#include "TaxableItem.h"
#include "PerishableItem.h"
#include "ShoppingCart.h"

using namespace std;

int main() {
	ShoppingCart cart;
	int m, y, d;
	//Item
	Item* shirt = new Item();
	shirt->setPrice(11.99);
	shirt->setQuantity(2);
	shirt->setName("T-shirt");
	cart.add(shirt);

	//Taxable Item

	TaxableItem* GPU = new TaxableItem();
	GPU->setPrice(999.99);
	GPU->setTaxRate(6.0);
	GPU->setQuantity(1);
	GPU->setName("RTX 4090 Founders Addition");
	cart.add(GPU);

	//Perishable Item
	cout << "Enter expiration year: ";
	cin >> y;
	cout << "Enter expiration month: ";
	cin >> m;
	cout << "Enter expiration day: ";
	cin >> d;
	PerishableItem* banana = new PerishableItem();

	banana->setQuantity(3);
	banana->setPrice(2.5);
	banana->setExpiration(y, m, d);
	banana->setName("Banana");
	cart.add(banana);
	
	cout << cart.receipt() << endl;

	return 0;
}