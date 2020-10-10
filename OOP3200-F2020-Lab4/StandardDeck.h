/** OOP3200. F2020. StandardDeck.h
 *
 *  In this lab you will create your own collection class called StandardDeck, which
 *	will 'contain' objects of the PlayingCard class.  The intent of the class is to
 *	represent a standard deck of 52 cards that might be useful in a card game type
 *	application.  
 *
 *	@author		Thom MacDonald
 *	@author		Tom Tsiliopoulos
 *	@version	2020.10
 *	@since		Jul 2018
 *	@see		Bronson, G. (2012). A First Book of C++ (4th ed.). Boston, MA: Course Technology.
*/
/* OOP 3200 - C++ Lab 5 - Collections
 * Ryan Clayson and Daniel Hinbest
 * 100558837		100717231
 * October 11, 2020
 */
#pragma once
#ifndef __STANDARD_DECK__
#define __STANDARD_DECK__
#include <vector>
#include "PlayingCard.h"

class StandardDeck
{
public:
	// Initialization:
	StandardDeck();

	//Virtual so that it can be overridden
	virtual void Initialize();
	
	// Rule of three:
	~StandardDeck(); //Destructor
	StandardDeck(StandardDeck& other_deck); //Copy Constructor
	StandardDeck& operator=(StandardDeck& other_deck); //Assignment operator overload
	
	// Accessors:
	void ShowDeck(); //displays cards in the deck
	int CardsRemaining(); //shows remaining number of cards
		
	// Mutators:
	void Shuffle(); //rearranges cards in deck
	void SetDeck(std::vector <PlayingCard> standard_deck);
	void DrawRandomCard();
	void DrawNextCard();

private:
	std::vector <PlayingCard> totalCards;
	bool createDeck;
};

#endif /* defined (__STANDARD_DECK__) */

