#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};

void add(struct node **tracker, int item);
void reverse(struct node **list);

int main(void){
    struct node *head, *next_node;

    head = next_node = NULL;

    for(int i = 0; i < 15; i++){ 
        if(head == NULL){
            add(&head, i);
            next_node = head;
        }
        else
            add(&next_node, i);
    }

    reverse(&head);

    for(int i = 0; i < 15; i++){
        printf("%d -> ", head->value);
        //always remember this step.
        head = head->next;
    }
    printf("NULL\n");

    return 0;
}
void add(struct node **tracker, int item){
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("Space not allocated\n");
        exit (EXIT_FAILURE);
    }

    new_node->value = item;

    if (*tracker == NULL){
        (*tracker) = new_node;
    }

    else {
        (*tracker)->next = new_node;
        (*tracker) = (*tracker)->next;
    }

    (*tracker)->next = NULL;
}

void reverse(struct node **head){
    struct node *cur, *prev, *next;
    prev = NULL;
    cur = *head;
    
    while (cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    *head = prev;
}