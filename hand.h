#ifndef HAND_H
#define HAND_H
#include "card.h"
#include <vector>
#include <iostream>
using namespace std;
class Hand
{
public:
	Hand();
	~Hand();

	void addCard(Card* aCard);
	bool removeCard(int pos, Card*& aCard);
	void print() const;
private:
	vector<Card*> cards;
};
#endif