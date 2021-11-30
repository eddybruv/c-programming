/**
 * Date: 30-11-2021.
 * by eddybruv
 * @brief: A program that sorts a series of words entered by the user.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char arr[20];
    struct node *next;
};

void add_list(struct node**, char *);
void print(struct node*);

int main(void){
    struct node *head, *tracker;
    head = tracker = NULL;
    char word[20];

    printf("Enter word: ");
    scanf("%s", word);

    while(word[0] != 'x'){
        if(head  == NULL){
            add_list(&head, word);
            tracker = head;
        }

        else {
            add_list(&tracker, word);
        }

        printf("Enter word: ");
        scanf("%s", word);
    }

    print(tracker);
    return 0;
}

void add_list(struct node **list, char *word){
    struct node *new_node, *cur, *prev;
    cur = *list;
    prev = NULL;
    new_node = malloc(sizeof(struct node));

    strcpy(new_node->arr, word);
    
    while(cur != NULL && (strcmp(cur->arr, new_node->arr) < 0)){
        prev = cur;
        cur = cur->next;
    }

    if(prev == NULL){
        *list = new_node;
        new_node->next = cur;
        return;
    }

    prev->next = new_node;
    new_node->next = cur;
}

void print(struct node *list){
    while(list != NULL){
        printf("%s->", list->arr);
        list = list->next;
    }
    printf("NULL\n");
}