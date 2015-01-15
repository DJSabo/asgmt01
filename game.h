#ifndef GAME_H
#define GAME_H
#include "player.h"
#include "deck.h"

class Game
{
public: 
	Game();
	~Game();

	void run();
private:
	Deck*		deck;
	Player*		player1;
	Player*		player2;
};
#endif