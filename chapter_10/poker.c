/*Date: 15-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/*external variables */
int num_in_rank [NUM_RANKS];
int num_in_suit[NUM_SUITS];
bool straight, flush, four, three;
int pairs;  /*can be 0, 1, or 2*/

/*prototypes*/
void read_cards (void);
void analyze_hand (void);
void print_result(void);


/*
    main: Calls read_cards, analyze_hand and print_result   
                                                            */

int main(void){
    for(;;){
        read_cards();
        analyze_hand();
        print_result();
    }
}

/*
        read_cards: Reads the cards into the external 
                    variables num_in_rank and num_in_suit;
                    checks for bad cards an d duplicate cards.
                                                                */


void read_cards(void)
{
    bool card_exists[NUM_RANKS] [NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for (rank = 0; suit < NUM_SUITS; rank++){
        num_in_rank[rank] = 0;
        for(suit = 0; suit < NUM_SUITS; suit++)
            card_exists[rank][suit] = false;
    }

    for (suit = 0; suit < NUM_SUITS; suit++)
        num_in_suit[suit] = 0;

    while (cards_read < NUM_CARDS){
        bad_card = false;

        printf("Enter a Card: ");

        rank_ch = getchar();
        switch (rank_ch){
            case '0':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case 't':
            case 'j':
            case 'q':
            case 'a':
        }
    }
}