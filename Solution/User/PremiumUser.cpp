#include "PremiumUser.h"

using namespace std;

PremiumUser::PremiumUser()
{
	discounts;
	premiumSubscriptionCost=0;
	//throw("undefined");
}

PremiumUser::PremiumUser(const string &judetf, const string &localitatef, const string &stradaf, int nr_stradaf, const string &blocf, int apartamentf,
						 const string &judetl, const string &localitatel, const string &stradal, int nr_stradal, const string &blocl, int apartamentl,
						 int id, const string &nume, const string &prenume, const string &email, int premiumSubscriptionCost, const map<int, int> &discounts)
	: User(judetf, localitatef, stradaf, nr_stradaf, blocf, apartamentf, judetl, localitatel, stradal, nr_stradal, blocl, apartamentl, id, nume, prenume, email)
{
	this->discounts=discounts;
	this->premiumSubscriptionCost=premiumSubscriptionCost;
	//throw("undefined");
}

PremiumUser::PremiumUser(const PremiumUser &up) : User(up)
{
	*this=up;
	//throw("undefined");
}

const PremiumUser &PremiumUser::operator=(const PremiumUser &up)
{
	if(this!=&up)
	{
		User::operator=(up);
		discounts=up.discounts;
		premiumSubscriptionCost=up.premiumSubscriptionCost;
	}
	return *this;
	//throw("undefined");
}

void PremiumUser::displayUser()
{
	throw("undefined");
}

string PremiumUser::getUserType()
{
	return "Premium user";
	//throw("undefined");
}

float PremiumUser::getTransportCost()
{
	//return costTransport;
	//throw("undefined");
}

map<int, int> &PremiumUser::getDiscounts()
{
	return discounts;
	//throw("undefined");
}

void PremiumUser::setDiscounts(map<int, int> red)
{
	discounts=red;
	//throw("undefined");
}

void PremiumUser::setPremiumSubscriptionCost(int cap)
{
	premiumSubscriptionCost=cap;
	throw("undefined");
}

int PremiumUser::getPremiumSubscriptionCost()
{
	return premiumSubscriptionCost;
	throw("undefined");
}

json PremiumUser::toJSON()
{
	return json(*this);
}