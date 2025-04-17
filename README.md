# Lab4-Inheritance

Create a class for Item with private attributes for name, quantity, and price
add gets for each, add sets for quantity and price, add a virtual function for getTotalPrice() 
that returns the quantity * price

Create a class TaxableItem that includes an attribute for tax rate ensure the tax rate is valid
( between 0-1 ), if it's more than 1, divide it by 100 override the getTotalPrice to include 
the tax

Create a class PerishableItem that includes an attribute for expiration date if the current 
date is after the expiration date, the total price is 0

( don't overthink the date math too hard, use the standard library ) 

add a class shopping cart that has a vector of item pointers add a function receipt that returns 
a string receipt showing each item and price, and total price
------------------------------------------------------------------------------------------------
class Taxable;
private:
  str name
  int quantity
  double price 
public:

class item:
private:
  str name
  int quantity
  double price 
public:
  getname()
  getquantity();
  getprice()
  setQuantity()
  setPrice()
  virtualgetTotalPrice()

  
