#include <stdio.h>

// enum suit
typedef enum { clubs, diamonds, hearts, spaces} suit_t;

// defines struct, as per assignment
typedef struct{
	unsigned int number : 4
	suit_t suit : 2
} card_t;

// CONSTANTS	
const int SUITS = 4;
const int CARDS = 13;


// globals
card_t deck[51];
	

// main shuffle program
int main(){
	
	// start loop for all suits
	for ( i = 0; i < SUITS; i++){

		// start loop for all cards within a suit
		for (j = 0; j < CARDS; j++){
		
			struct card_t Ace =  


		}
	}


return 0;
}
