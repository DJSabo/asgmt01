#include "hand.h"

Hand::Hand(){}
Hand::~Hand()
{
	for (auto it = cards.begin(); it != cards.end(); it++)
	{
		delete *it;
	}
}

void Hand::addCard(Card * aCard)
{
	cards.push_back(aCard);
}

bool Hand::removeCard(int pos, Card*& aCard)
{
	if (pos < 0 || pos >= cards.size())
		return false;
	int index = 0;
	for (auto it = cards.begin(); it != cards.end(); it++, index++)
	{
		if (index == pos)
		{
			aCard = *it;
			cards.erase(it);
			break;
		}
	}
	return true;
}

void Hand::print() const
{
	cout << endl;
	for (auto it = cards.cbegin(); it != cards.cend(); it++)
	{
		(*it)->print(); 
		cout << " ";
	}
	cout << endl << endl;
}