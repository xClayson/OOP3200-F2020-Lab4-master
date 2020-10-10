/* OOP 3200 - C++ Lab 5 - Collections
 * Ryan Clayson and Daniel Hinbest
 * 100558837		100717231
 * October 11, 2020
 */
#include "StandardDeck.h"
#include <ctime>
#include <iostream>

//Default Constructor
StandardDeck::StandardDeck():createDeck(false)
{
	Initialize();
}

//Initializes Deck of Cards
void StandardDeck::Initialize()
{
	PlayingCard cards;
	int suit = 0, number = 1;

	if (createDeck == true)
	{
		//clears deck of cards
		totalCards.clear();
	}
	//creates a loop for 52 cards
	for (int i = 0; i < 52; i++)
	{
		cards = PlayingCard(number, suit, i, true);
		totalCards.push_back(cards);
		number++;
		if (number == 14)
		{
			suit++;
			number = 1;
		}
	}
	createDeck = true;
}

//Destructor
StandardDeck::~StandardDeck()
= default;

//Copy Constructor
StandardDeck::StandardDeck(StandardDeck& other_deck)
{
	SetDeck(other_deck.totalCards);
}

//Assignment Operator
StandardDeck& StandardDeck::operator=(StandardDeck& other_deck)
{
	SetDeck(other_deck.totalCards);
	return (*this);
}

//Displays the card this is drawn. Then removes it from the deck
void StandardDeck::DrawNextCard()
{
	std::cout << totalCards[0].GetRank() << " of " << totalCards[0].GetSuit();
	totalCards.erase(totalCards.begin());
}

//Returns updated size of the deck of cards
int StandardDeck::CardsRemaining()
{
	return totalCards.size();
}

//Draws a random card based off of a random number. Shows which card is drawn and
//removes it from the deck
void StandardDeck::DrawRandomCard()
{
	int randomValue;
	srand(time(NULL));

	randomValue = rand()  % totalCards.size();
	std::cout << totalCards[randomValue].GetRank() << " of " << totalCards[randomValue].GetSuit();
	totalCards.erase(totalCards.begin() + randomValue);
}

//Shuffles Deck. 
void StandardDeck::Shuffle()
{
	int numbers = totalCards.size();
	int randomValueOne, randomValueTwo;
	srand(time(NULL));

	for (int i = 0; i <= totalCards.size(); i++)
	{
		randomValueOne = rand() % totalCards.size();
		randomValueTwo = rand() % totalCards.size();
		std::swap(totalCards[randomValueOne], totalCards[randomValueTwo]);
	}
	
}

//Method to show all cards in the deck
void StandardDeck::ShowDeckOfCards()
{
	for (int i = 0 ; i <= totalCards.size() - 1; i ++)
	{
		std::cout << " " << totalCards[i].GetRank() << " of " << totalCards[i].GetSuit() <<
			std::endl;
		
	}
}
//Sets all cards to another deck of cards
void StandardDeck::SetDeck(std::vector <PlayingCard> standard_deck)
{
	for (int i = 0; i <= CardsRemaining(); i++)
	{
		totalCards[i] = standard_deck[i];
	}
}
