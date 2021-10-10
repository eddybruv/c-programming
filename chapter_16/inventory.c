#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand; 
} inverntory[MAX_PARTS];

int num_parts = 0;     /* number of parts currently stored*/

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void)
{
    char code;
    for (;;) {
        print("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')    /* skips to end of line */
            ;
        switch (code){
            case 'i': insert ();
                    break;
            case 's': search();
                    break;
            case 'u': update();
                    break;
            case 'p': print();
                    break;
            default: printf("Illegal code\n");
        }
        printf("\n");
    }

    /**
     * find_part:   Looks up a part number in the inventory
     *              array. Returns the array index if the part
     *              number is found; otherwise, returns -1. 
     **/

    int find_part(int number)
    {
        int i;
         
        for (i = 0; i< num_parts; i++)
            if (inventory[i] .number == number)
                return i;
        return -1;
    }

    /**
     * insert:  Promts the user for information about a new
     *          part and then inserts the part into the 
     *          database. Prints an error message and returns
     *          prematurely if the part already exist
     **/

    void insert(void)
    {
        int part_number;

        if(num_parts == MAX_PARTS) {
            printf("Database is full; cant add more parts.\n");
            return;
        }

        printf("Enter part number: ");
        scanf("%d", &part_number);

        if (find_part(part_number) >= 0) {
            printf("Part already exist. \n");
            return;
        }

        inventory[num_parts] .number = part_number;
        printf("Enter part name: ");
        read_line(inventory[num_parts] .name, NAME_LEN);
        printf("Enter quantity on hand: ");
        scanf("%d", &inventory[num_parts] .on_hand);
        num_parts++;
    }

    /**
     * search:  Promts the user to enter a part number, then
     *          looks up the part in the database. If the part
     *          exists, prints the name and quantity on hand;
     *          if not, prints an error message.
     **/
    
    void search(void)
    {
        int i, number;

        printf("Enter part number: ");
        scanf("%d", &number);
        i = find_part(number);
        if (i >= 0) {
            printf("Part name: %s\n", inventory[i] .name);
            print("Quality on hand: %d\n", inventory[i] .on_hand);
        }
        else {
            printf("Part not found.\n");
            }
    }

    /**
     * update: Prompts the user to enter a part number.
     *         Prints an error message if the part doesn't 
     *         exist; otherwise, prompts the user to enter
     *         change in quantity on hand and updates the 
     *         database.
     **/

    void update (void)
    {
        int i, number, change;

        printf("Enter part number: ");
        scanf("%d", &number);
        i = find_part(number);
        if (i >= 0) {
            printf("Enter change in quantity on hand: ");
            scanf("%d", &change);
            inventory[i] .on_hand += change;
        }
        else
            printf("Part not found. \n");
    }

    /**
     * print:   Prints a listing of all parts in the database,
     *          showing the part number, part name, and 
     *          quantity on hand. Parts are printed in the 
     *          order in which they were entered into the database.
     **/

    void print (void)
    {
        int i;

        printf("Part Number    Part Name
               "Quantity on Hand\n");
        for (i = 0; i < num_parts; i++)
            printf("%7d       %-2s%11d\n", inventory[i] .number,
                    inventory[i] .name, inventory[i] .on_hand);
    }
}