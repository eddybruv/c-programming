/**
 * Date: 04-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suits;
    const char *rank_code[] = {"Two", "Three", "Four", "Five", "Six", "Seven", 
                            "Eight", "Nine", "T", "Joker", "Queen", "King", "Ace"};
    const char *suit_code[] = {"Clubs", "Diamond", "Hearts", "Spades"};

    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand: \n");
    while (num_cards > 0)
    {
        suits = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;

        if(!in_hand[suits][rank]){
            in_hand[suits][rank] = true;
            num_cards--;
            printf("  %s of %s\n", rank_code[rank], suit_code[suits]);
        }
    }
    printf("\n");
    
    return 0;
}