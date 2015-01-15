#include <iostream>
using namespace std;
#include "game.h"
#include "card.h"

#define CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

//test3
//test2

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Deck * deck = new Deck();
	cout << endl << "A brand new deck of cards: " << endl;
	deck->print();
	deck->shuffleCards();
	cout << endl << "After shuffling: " << endl;
	deck->print();

	Card * aCard;
	cout << endl << "dealing a card: " << endl;
	deck->dealCard(aCard);
	aCard->print();
	cout << endl;
	cout << endl << "after dealing: " << endl;
	deck->print();
	//delete deck;

	Hand * aHand = new Hand();
	aHand->addCard(new Card(1, spade));
	aHand->addCard(new Card(3, heart));
	aHand->addCard(new Card(4, diamond));
	aHand->print();
	aHand->removeCard(1, aCard);
	cout << "card just removed: " << endl;
	aCard->print();
	cout << endl;
	cout << "hand after: " << endl;
	aHand->print();

	cout << "player1 drawing 3 cards: " << endl;
	Player * player1 = new Player();
	for (int i = 0; i < 3; i++)
	{
		player1->drawCard(deck);
	}
	
	player1->print();

	cout << "player1 play a card: " << endl;
	player1->playCard(aCard);
	aCard->print();
	cout << "player1 after playing: ";
	player1->print();
	/*
	Card * aCard = new Card(2, spade);
	cout << "Suit: " << aCard->getSuit() << " Rank: " << aCard->getRank() << endl;
	aCard->print();
	cout << endl;
	
	delete aCard;
	*/
	/*
	Game aGame;
	aGame.run();
	*/
	system("pause");
	return 0;
}
