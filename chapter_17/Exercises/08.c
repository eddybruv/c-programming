/**
 * @brief : Create a stack using linked list
 **/

#include <stdio.h>
#include <stdlib.h>

struct stack {
    int data;
    struct stack *next;
};

struct stack* add_stack(struct stack *list, int n);
void print_stack(struct stack *);
struct stack* pop(struct stack *);
void top(struct stack *head);
void last(struct stack *last);
char read_char(char *);

int main(void){
    struct stack *head, *list;
    head = NULL;
    char operator, *token;
    int ch;

    while((ch = getchar())){
        if (ch == ' ' || ch == '\n'){

        }
    }

    
    return 0;
}

struct stack* add_stack(struct stack *list, int n){
    struct stack* new_node;
    new_node = (struct stack *) malloc(sizeof(struct stack ));
    
    if(new_node == NULL)
    {
        fprintf(stderr, "Memory not allocated!");
        exit(EXIT_FAILURE);
    }

    new_node->data = n;

    if(list == NULL){
        list = new_node;
    }

    else {
        list->next = new_node;
        list = list->next;
    }
 
    list->next = NULL;

    return new_node;
}
 
void print_stack(struct stack *list){
    while (list->next != NULL){
        printf("%d->", list->data);
        list = list->next;
    }
    printf("%d\n", list->data);
}

struct stack* pop(struct stack *head){
    struct stack *next;
    next = head->next;
    printf("Removing %d from the stack\n", head->data);
    free(head);
    return next;
}

void top(struct stack *head){
    printf("Top of stack: %d\n", head->data);
}

void last(struct stack *last){
    printf("Last element in the stack: %d", last->data);
}