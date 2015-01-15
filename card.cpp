#include "card.h"
#include <iostream>
using namespace std;

#include <string>

Card::Card(int rank, Suit suit) : rank(rank), suit(suit){}

Card::~Card(){}

int Card::getRank() const
{
	return rank;
}

Suit Card::getSuit() const
{
	return suit;
}

void Card::print() const
{
	string suitStr;
	switch (suit)
	{
	case heart:
		suitStr = "Heart";
		break;
	case diamond:
		suitStr = "Diamond";
		break;
	case spade:
		suitStr = "Spade";
		break;
	case club:
		suitStr = "Club";
		break;
	default:
		suitStr = "None";
		break;
	}

	cout << suitStr << "--" << rank; 
}
