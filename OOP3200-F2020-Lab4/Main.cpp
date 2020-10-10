/* OOP 3200 - C++ Lab 5 - Collections
 * Ryan Clayson and Daniel Hinbest
 * 100558837		100717231
 * October 11, 2020
 */
#include <ctime>
#include <iostream>
#include "StandardDeck.h"

void Pause() {
	std::cout << "\nPress \'ENTER\' to continue..." << std::endl;
	std::cin.ignore();	fflush(stdin);
}

int main()
{
	/*	Your main() function should demonstrate each of the features of the StandardDeck class*/
	srand(time(nullptr)); // seed the random number generator

	// create a deck
	StandardDeck standard_deck;
	std::cout << "     Deck is Created     " << std::endl;
	std::cout << "_________________________" << std::endl;
	
	// Show the deck object as initialized
	standard_deck.ShowDeckOfCards();
	Pause();
	
	// Draw the next card and show it
	std::cout << "________________" << std::endl;
	std::cout << "\nDraw Next Card" << std::endl;
	std::cout << "________________" << std::endl;
	standard_deck.DrawNextCard();
	Pause();

	// Draw a random card and show it
	std::cout << "__________________" << std::endl;
	std::cout << "\nDraw Random Card" << std::endl;
	std::cout << "__________________" << std::endl;
	standard_deck.DrawRandomCard();
	Pause();
	
	// Show the deck with the remaining cards
	std::cout << "__________________" << std::endl;
	std::cout << "\nRemaining Cards" << std::endl;
	std::cout << "__________________" << std::endl;
	standard_deck.CardsRemaining();
	standard_deck.ShowDeckOfCards();
	Pause();

	// Shuffle the deck and show the result
	std::cout << "__________________" << std::endl;
	std::cout << "\nShuffling Deck" << std:: endl;
	std::cout << "__________________" << std::endl;
	standard_deck.Shuffle();
	standard_deck.ShowDeckOfCards();
	Pause();

	// Reset the deck and show the result
	std::cout << "__________________" << std::endl;
	std::cout << "\nReset Deck" << std::endl;
	std::cout << "__________________" << std::endl;
	standard_deck.Initialize();
	standard_deck.ShowDeckOfCards();
	
}//end of main

