#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void add_end2(struct node **point, int n);
struct node *add_head (struct node *point, int n);
struct node *add_end1(struct node *list, int n);

int main(void){
    struct node *head, *point;

    head = malloc(sizeof(struct node));
    head->value = 1;
    head->next = NULL;

    head = point;

    for (int i = 0; i < 7;i++){
        point = add_end1(point, i);
    }

    for (int i = 0; i < 7;i++){
        printf("%d -> ", head->value);
        head = head->next;
    }
}

struct node *add_end1(struct node *tracker, int n){
    struct node *new_node;

    new_node = malloc (sizeof(struct node));

    if(new_node == NULL){
        printf("Memory not allocated");
        exit (EXIT_FAILURE);
    }

    new_node -> value = n;
    if (tracker == NULL){
        //point is head
        tracker = new_node;
    }

    else {
        tracker->next = new_node;
        tracker = tracker->next;
    }

    tracker->next = NULL;

    return tracker;
}

void add_end2(struct node **point, int n){
    struct node *new_node;

    new_node = malloc (sizeof(struct node));
    if(new_node == NULL){
        printf("Memory not allocated");
        exit (EXIT_FAILURE);
    }

    new_node -> value = n;
    if (*point == NULL){
        //point is head
        (*point) = new_node;
    }

    else {
        (*point)->next = new_node;
        (*point) = (*point) -> next;
    }

    (*point)->next = NULL;
}

struct node *add_head(struct node *list, int n){
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    
    new_node->value = n;
    new_node->next = list;

    return new_node;
}