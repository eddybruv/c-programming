/** 
 * @brief: write a function (my_malloc) to allocate memory
 * and check if the memory is allocated.
 **/

#include <stdio.h>
#include <stdlib.h>

void my_malloc(char *); //the pointer type can be replaced by any other type

int main(void){
    char *str;
    my_malloc(str);
}

void my_malloc(char *str){
    int n;
    printf("How much memory do you want to allocate: ");
    scanf("%d", &n);
    str = (char *) malloc(n + 1);

    if(str == NULL){
        fprintf(stderr, "Memory not allocated!\n");
        exit(EXIT_FAILURE);
    }

    printf("Memory allocated!\n");
}