/**
 * @brief: fix a given function.
 */

#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *insert_into_ordered_list(struct node *list, struct node *new_node){
    struct node *cur = list, *prev = NULL;
    
    while (cur->value <= new_node->value){
        prev = cur;
        cur = cur->next;
    }
    prev->next = new_node;
    new_node->next = cur;
    return list;
}

struct node *insert_into_ordered_list_solution(struct node *list, struct node *new_node){
    struct node *cur = list, *prev = NULL;
    
    while (cur->value <= new_node->value){
        prev = cur;
        cur = cur->next;
    }

    if(prev == NULL){ 
        new_node->next = list;
        list = new_node;
        return list;
    }

    prev->next = new_node;
    new_node->next = cur;
    return list;
}