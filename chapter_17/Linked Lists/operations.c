#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next_node;
};

struct node *add_to_list (struct node *list, int n);
struct node *read_numbers(void);
struct node *search_list(struct node *list, int n);

int main(void){
    read_numbers();
    return 0;
}

/**
 * @brief: Function to insert a node to the linked list.
 * @param list: a pointer to the first node int the old list.
 * @param n: interger to be inserted.
 * @return: Returns a pointer to a newly created node which is now the begining of 
 *          the list
 **/

struct node *add_to_list (struct node *list, int n){
    struct node* new_node;
    new_node = malloc (sizeof(struct node));
    
    if(new_node == NULL) {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node -> value = n;
    new_node -> next_node = list;
    return new_node;
}

/**
 * @brief: uses the add_to_list function to create a linked list 
 *         constaining numbers entered by the user.
 * @return: returns pointer to the first node
 **/

struct node *read_numbers(void) {
    struct node *first = NULL;
    int n;

    printf("Enter a series of intergers (0 to terminate): ");
    for (;;) {
        scanf("%d", &n);
        if (n == 0)
            return first;
        first = add_to_list(first, n);
    }
}

/**
 * @brief: searches a list for an interger n.
 * @param list: linked list (chain of structures).
 * @param n: interger to be found.
 * @return: return a pointer pointing to the node containing the interger
 *          returns NULL if interger is not found.
 **/

struct node *search_list (struct node *list, int n) {
    struct node *p;

    for (p = list; p != NULL; p = p -> next_node)
        if (p -> value == n)
            return p;
    return NULL;
}