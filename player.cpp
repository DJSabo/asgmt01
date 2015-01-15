#include "player.h"

Player::Player() :winningPile(0){}

Player::~Player(){}

bool Player::drawCard(Deck * deck)
{
	Card * aCard;
	bool done = false;

	if (deck->dealCard(aCard))
	{
		hand.addCard(aCard);
		done = true;
	}	
	return done;
}

void Player::print() const
{
	cout << endl << "current hand: ";
	hand.print();
	cout << endl << "winning pile: " << winningPile << endl;
}

bool Player::playCard(Card*& aCard)
{
	return hand.removeCard(0, aCard);
}