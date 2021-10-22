#include <stdio.h>
#include <string.h>

/**
 * Suppose we're designing a structure that will contain
 * information abount an item that's sold through a gift catalog.
 * Each item has a stock number and a price,
 * 
 * Books: Title, author, nnumber of pages.
 * Mugs: Design.
 * Shirts: Design, colors available, sizes available.
 **/

//using a structure: 

struct catalog_item {
    int stock_number;
    double price;
    int item_type;
    char title[20];
    char author[20];
    int num_pages;
    char design[20];
    int colors;
    int sizes;
};

/**
 * This structure is perfectly usable but it waste space
 * since only part of the information in th structure is common to all items.
 * 
 * We can reduce the space required by the structure by 
 * putting a union inside the catalog_item structure.
 * 
 * The members of the union will be structures, each containing the 
 * data that's needed for a particular kind of catalog item:
 **/

struct catalog_item2 {
    int stock_number;
    double price;
    int item_type;

    union {
        struct {
            char title[20];
            char author[20];
            int num_pages;
        }book;
        struct {
            char design[20];
        }mug;
        struct {
            char design[20];
            int colors;
            int sizes;
        } shirt;
    }item;
}c2;

int main(void){
    strcpy(c2.item.mug.design, "cats");

    printf("%s", c2.item.mug.design);
    return 0;
}