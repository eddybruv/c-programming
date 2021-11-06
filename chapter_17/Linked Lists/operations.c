#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next_node;
};

struct node *add_to_list (struct node *list);
struct node *read_numbers(void);
void search_list(struct node *list, int n);
struct node *delete_node (struct node *list, int n);
void print_list (struct node *list);

int main(void){
    struct node *head = NULL;

    for (int i = 0; i < 7; i++)
        head = add_to_list(head);

    search_list(head, 6);
    head = delete_node(head, 8);    
    print_list(head);
    
    return 0;
}

/**
 * @brief: Function to insert a node to the linked list.
 * @param list: a pointer to the first node int the old list.
 * @param n: interger to be inserted.
 * @return: Returns a pointer to a newly created node which is now the begining of 
 *          the list
 **/

struct node *add_to_list (struct node *head){
    struct node* new_node;
    int n;

    new_node = (struct node*) malloc (sizeof(struct node));
    
    if(new_node == NULL) {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter an interger: ");
    scanf("%d", &n);

    new_node -> value = n;
    new_node -> next_node = head;
    head = new_node;

    //printf("%d->", head->value);
    return head;

}

/**
 * @brief: searches a list for an interger n.
 * @param list: linked list (chain of structures).
 * @param n: interger to be found.
 * @return: return a pointer pointing to the node containing the interger
 *          returns NULL if interger is not found.
 **/

void search_list(struct node *list, int n) {
    struct node *p;
    printf("Enter number to be searched: ");
    scanf("%d", &n);
    for (p = list; p != NULL; p = p -> next_node){
        if (p -> value == n){
            printf("%d: Found\n", p -> value);
            return;
        }
    }
    printf("%d: Not found\n", n);
}

/**
 * @brief: searches a list to find a node to be deleted.
 * @param list: a list to search.
 * @param n: value in the node to be deleted.
 * @return: pointer to the list.
 **/

struct node *delete_node (struct node *list, int n){
    struct node *cur, *prev;

    for (cur = list, prev = NULL; 
        cur != NULL && cur->value != n;
        prev = cur, cur = cur->next_node)
        ;
    
    if(cur == NULL) //n wasnot found
        return list;
    if (prev == NULL) //n is the first node.
        list = list -> next_node;
    else 
        prev -> next_node = cur->next_node; //by pass

    free(cur);
    return list;
}

/**
 * @brief: Prints the list.
 **/

void print_list(struct node *list){
    struct node *p;
    
    for(p = list;p != NULL;p = p->next_node)
        printf("%d -> ", p->value);
    if (p == NULL)
        printf("NULL\n");
}