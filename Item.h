#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std; 


class Item {

private:
	int quantity;
	double price;
	string name;

public:
	string getName() const;
	int getQuantity() const;
	double getPrice() const;
	void setQuantity(int q);
	void setPricce(double p);

	virtual double getTotalPrice() const;

};

#endif

