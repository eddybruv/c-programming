/**
 * @brief: modify delete from list function.
 */

#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void delete_node(struct node **list, int x){
    struct node *prev, *cur;
    prev = NULL;
    cur = *list;

    while((cur != NULL) && (cur->value != x)){
        prev = cur;
        cur = cur->next;
    }

    if(prev = NULL){
        (*list) = (*list)->next;
        free(cur);
    }

    prev->next = cur->next;
    free(cur);
}