#include "DiscountedProduct.h"
using namespace std;

DiscountedProduct::DiscountedProduct() : NonFoodProduct()
{
	discountPercentage=0;
	//throw("undefined");
}

DiscountedProduct::DiscountedProduct(const string &category, int id, const string &producer, const string &name, float price, int yearsOfWarranty, int discountPercentage, int quantity)
	: NonFoodProduct(category, id, producer, name, price, yearsOfWarranty, quantity)
{
	this->discountPercentage=discountPercentage;
	//throw("undefined");
}

DiscountedProduct::DiscountedProduct(const DiscountedProduct &discountedProduct) : NonFoodProduct(discountedProduct)
{
	*this=discountedProduct;
	//throw("undefined");
}

float DiscountedProduct::priceAfterDiscount() const
{
	return (price - (price * discountPercentage) / 100);
	//throw("undefined");
}

float DiscountedProduct::getDiscountPercentage()
{
	return discountPercentage;
	//throw("undefined");
}

const DiscountedProduct &DiscountedProduct::operator=(const DiscountedProduct &a)
{
	if(this!=&a)
	{
		NonFoodProduct::operator=(a);
		this->discountPercentage=a.discountPercentage;
	}
	return *this;
	//throw("undefined");
}

void DiscountedProduct::setDiscountPercentage(int discountPercentage)
{
	this->discountPercentage=discountPercentage;
	//throw("undefined");
}

string DiscountedProduct::getProductType()
{
	return "Discounted product";
	//throw("undefined");
}

json DiscountedProduct::toJSON()
{
	return json(*this);
}

void DiscountedProduct::display()
{
	cout << "Product Redus" << endl;
	cout << "Nume Product: " << this->name << endl;
	cout << "Producator: " << this->producer << endl;
	cout << "Categorie: " << this->category << endl;
	cout << "ID: " << this->id << endl;
	cout << "Cantitate: " << this->quantity << endl;
	cout << "Garantie: " << this->yearsOfWarranty << " ani" << endl;
	cout << "Pret: " << this->price << endl;
	cout << "Procent reducere : " << this->discountPercentage << endl
		 << endl;
}