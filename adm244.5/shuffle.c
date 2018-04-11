#include <stdio.h>

// enum suit
typedef enum { clubs, diamonds, hearts, spaces} suit_t;

// enum flush (ie, cards in a suit)
typedef enum { "Ace", "Two", "Three", "Four", "Five", \
		"Six", "Seven", "Eight", "Nine", "Ten", \
		"Jack", "Queen", "King" } flush;

// defines struct, as per assignment
typedef struct{
	unsigned int number : 4 \
	suit_t suit : 2
} card_t;

// CONSTANTS	
const int SUITS = 4;
const int CARDS = 13;
const int DECK = 52;

// globals
card_t deck[DECK];
	

// main shuffle program
int main(){
	
	// start loop for all suits
	for ( i = 1; i <= SUITS; i++){

		// start loop for all cards within a suit
		for (j = 1; j <= CARDS; j++){
			
			int count = (j * i);
			struct card_t card = { j, i };
			deck[count] = card;
		}
	}

// TEST! //
for (a=1; a <= DECK; a++){
printf (deck[a]);
}

return 0;
}
