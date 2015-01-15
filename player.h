#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include "deck.h"
#include "hand.h"

class Player
{
public: 
	Player();
	~Player();

	bool drawCard(Deck * deck);
	bool playCard(Card*& aCard);
	/*
	void setAside(Card* aCard);
	int getScore() const;
	*/
	void print() const;
private:
	Hand	hand;
	int		winningPile;
};
#endif