#ifndef _PRODUCT_H

#include <iostream>
#include <string>
#include "iProduct.h"

class Product : public w6::iProduct
	// Holds information about a product that consists of its product number and its cost
{
	 std::string m_ProductNumber;
	double m_ProductCost;
public:
	Product();
	Product(std::string& ProductNumber, double ProductCost);
	~Product();

	double getPrice() const;
	void display(std::ostream& os) const;
};

#endif // !_PRODUCT_H
