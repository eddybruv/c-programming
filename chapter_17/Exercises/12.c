/**
 * @brief: The function returns the last node that contains a number n
 **/

#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node *next;
};

void add_node(struct node **, int);
struct node *find_last(struct node *, int n);
void print_list(struct node *list);
struct node *find_last(struct node*, int n);

int main(void){
    struct node *head, *tracker, *last_node;
    head = tracker = NULL;

    for(int i = 0; i < 9;i++){
        if(head == NULL){
            add_node(&head, i);
            tracker = head;
        } 

        else {
            add_node(&tracker, i);
        }
    }
    print_list(head);
    last_node = find_last(head, 8);
}

void add_node(struct node **list, int n){
    struct node *new_node;
    new_node = malloc(sizeof(struct node));

    new_node->data = n;

    if(*list == NULL){
        *list = new_node;
    }

    else{
        (*list)->next = new_node;
        *list = (*list)->next;
    }

    new_node->next = NULL;
}

void print_list(struct node *list){
    while(list != NULL){
        printf("%d ", list->data);
        list = list->next;
    }
    printf("NULL\n");
}

struct node *find_last(struct node* list, int n){
    struct node *last_node;
    int count = 1, node_num = 0;

    while(list != NULL){
        if (list->data == n){
            last_node = list;
            node_num = count;
        }
        count++;    
        list = list->next;
    }
    if(node_num == 0){
        printf("No occurrence!");
        return NULL;
    }
    printf("Last occurrence of %d was found in node: %d", n, node_num);
    return last_node;
}