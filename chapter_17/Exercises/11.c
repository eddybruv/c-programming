/**
 * @brief: A function to return the number of times a number occurs in a list
 **/

#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int count (struct Node *list, int n){
    int count = 0;

    while(list != NULL){
        if(list->data == n)
            count++;
    }

    return count;
}