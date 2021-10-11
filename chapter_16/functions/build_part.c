/**
 * Function returns a part structure that it constructs from its arguments
 **/
#include <string.h>

struct part {
    int number;
    char name[20];
    int on_hand;
};

struct part build_part(int number, const char *name, int on_hand)
{
    struct part p;

    p.number = number;
    strcpy(p.name, name);
    p.on_hand = on_hand;
    
    return p;
}

/**
 * Remember that struct part is a type.
 * 
 * Here's how build_part can be called:
 * part1 = build_part(528, "Disk drive", 10);
 **/