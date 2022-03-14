#include "Product.h"
using namespace std;

Product::~Product() {}

bool Product::checkQuantity(int requestedQuantity)
{
	throw("undefined");
}

Product::Product(const string &category, int id, const string &name, int quantity)
{
	this->category = category;
	this->id = id;
	this->name = name;
	this->quantity = quantity;
	//throw("undefined");
}

Product::Product(const Product &p)
{
	*this=p;
	//throw("undefined");
}

Product::Product()
{
	name;
	quantity=0;
	category;
	id=0;
	//throw("undefined");
}

void Product::decreaseQuantity(int requestedQuantity)
{
	//throw("undefined");
}

void Product::increaseQuantity(int requestedQuantity)
{
	//throw("undefined");
}

void Product::setCategory(const string &category)
{
	this->category=category;
	//throw("undefined");
}

void Product::setId(int id)
{
	this->id=id;
	//throw("undefined");
}

void Product::setQuantity(int quantity)
{
	this->quantity=quantity;
	//throw("undefined");
}

void Product::setName(const string &name)
{
	this->name=name;
	//throw("undefined");
}

string &Product::getCategory()
{
	return category;
	//throw("undefined");
}

int Product::getQuantity()
{
	return quantity;
	//throw("undefined");
}

int Product::getId()
{
	return id;
	//throw("undefined");
}

string &Product::getName()
{
	return name;
	//throw("undefined");
}

const Product &Product::operator=(const Product &a)
{
	if(this!=&a)
	{
		name=a.name;
		id=a.id;
		category=a.category;
		quantity=a.quantity;
	}
	return *this;
	//throw("undefined");
}

json Product::toJSON()
{
	return json(*this);
}
