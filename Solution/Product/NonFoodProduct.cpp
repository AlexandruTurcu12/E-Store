#include "NonFoodProduct.h"

NonFoodProduct::NonFoodProduct()
{
	producer;
	yearsOfWarranty=0;
	price=0.0;
	//throw("undefined");
}

NonFoodProduct::NonFoodProduct(const string &category, int id, const string &producer, const string &name, float price, int yearsOfWarranty, int quantity) : Product(category, id, name, quantity)
{
	this->producer=producer;
	this->price=price;
	this->yearsOfWarranty=yearsOfWarranty;
	//throw("undefined");
}

NonFoodProduct::NonFoodProduct(const NonFoodProduct &pn) : Product(pn)
{
	*this=pn;
	//throw("undefined");
}

void NonFoodProduct::setYearsOfWarranty(int garantieAni)
{
	yearsOfWarranty=garantieAni;
	//throw("undefined");
}

void NonFoodProduct::setPrice(float price)
{
	this->price=price;
	//throw("undefined");
}

void NonFoodProduct::setProducer(const string &producer)
{
	this->producer=producer;
	//throw("undefined");
}

int NonFoodProduct::getYearsOfWarranty()
{
	return yearsOfWarranty;
	//throw("undefined");
}

float NonFoodProduct::getPrice()
{
	return price;
	//throw("undefined");
}

string &NonFoodProduct::getProducer()
{
	return producer;
	//throw("undefined");
}

bool NonFoodProduct::operator==(const NonFoodProduct &obj) const
{
	return ((this->category==obj.category) && (this->id==obj.id) && (this->name==obj.name) && (this->quantity==obj.quantity) && (this->producer==obj.producer) && (this->yearsOfWarranty==obj.yearsOfWarranty) && (this->price==obj.price));
	//throw("undefined");
}

const NonFoodProduct &NonFoodProduct::operator=(const NonFoodProduct &a)
{
	if(this!=&a)
	{
		Product::operator=(a);
		producer=a.producer;
		yearsOfWarranty=a.yearsOfWarranty;
		price=a.price;
	}
	return *this;
	//throw("undefined");
}

string NonFoodProduct::getProductType()
{
	return "Non-food product";
	//throw("undefined");
}

json NonFoodProduct::toJSON()
{
	return json(*this);
}

void NonFoodProduct::display()
{
	cout << "Product Nealimentar" << endl;
	cout << "Nume Product: " << this->name << endl;
	cout << "Producator: " << this->producer << endl;
	cout << "Categorie: " << this->category << endl;
	cout << "ID: " << this->id << endl;
	cout << "Cantitate: " << this->quantity << endl;
	cout << "Garantie: " << this->yearsOfWarranty << " ani" << endl;
	cout << "Pret: " << this->price << endl
		 << endl;
}
