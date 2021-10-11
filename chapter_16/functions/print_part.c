/**
 * void funtion with no return type.
 * Argument is a structure
 **/

#include <stdio.h>

typedef struct {
    int number;
    char name[20];
    int on_hand;
} Part;

void print_part(Part p)
{
    printf("Part number: %d\n", p.number);
    printf("Part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.on_hand);
}

/**
 * Here's how print_part can be called:
 * print_part(part1);
 * 
 * Taking into consideration the part1 has be defined:
 * Part part1;
 **/