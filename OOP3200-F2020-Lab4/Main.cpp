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
	std::cout << "Deck is Created" << std::endl;
	std::cout << "_______________" << std::endl;
	
	// Show the deck object as initialized
	standard_deck.ShowDeck();
	Pause();
	
	// Draw the next card and show it
	std::cout << "\nDraw Next Card" << std::endl;
	std::cout << "______________" << std::endl;
	standard_deck.DrawNextCard();
	Pause();

	// Draw a random card and show it
	std::cout << "\nDraw Random Card" << std::endl;
	std::cout << "__________________" << std::endl;
	standard_deck.DrawRandomCard();
	Pause();
	
	// Show the deck with the remaining cards
	std::cout << "\nRemaining Cards" << std::endl;
	std::cout << "_________________" << std::endl;
	standard_deck.CardsRemaining();
	standard_deck.ShowDeck();
	Pause();

	// Shuffle the deck and show the result
	std::cout << "\nShuffling Deck" << std:: endl;
	std::cout << "________________" << std::endl;
	standard_deck.Shuffle();
	standard_deck.ShowDeck();
	Pause();

	// Reset the deck and show the result
	std::cout << "\nReset Deck" << std::endl;
	std::cout << "____________" << std::endl;
	standard_deck.Initialize();
	standard_deck.ShowDeck();
	
}//end of main

