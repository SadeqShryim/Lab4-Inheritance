#include "ShoppingCart.h"


using namespace std;

void ShoppingCart::add(Item * item) {
	items.push_back(item);
}
string ShoppingCart::receipt() const {
	double accumTotal = 0.0;
	string purchaces;

	for (Item* item : items) {
		double itemTotal = item->getTotalPrice();
		purchaces += item->getName() + ": $" + to_string(itemTotal) + "\n";
		accumTotal += itemTotal;
	}

	purchaces += "Total: $" + to_string(accumTotal) + "\n";
	return purchaces;
}