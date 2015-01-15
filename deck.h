#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>
#include <iostream>
using namespace std;

class Deck
{
public:
	Deck();
	~Deck();

	void shuffleCards();
	bool dealCard(Card*& aCard);
	bool isEmpty() const;
	void print() const;
	
private:
	vector<Card*>  cards;
};
#endif