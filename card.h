#ifndef CARD_H
#define CARD_H

enum Suit{heart, diamond, club, spade};
class Card
{
public:
	Card(int rank = 1, Suit suit = heart);
	~Card();

	int getRank() const;
	Suit getSuit() const;
	void print() const;
private:	
	int		rank;
	Suit	suit;
};

#endif