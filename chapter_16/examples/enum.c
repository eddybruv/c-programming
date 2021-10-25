#include <stdio.h>

int main(void){
    int i;
    enum {CLUBS, DIAMONDS, HEARTS, SPADES} s;

    i = DIAMONDS;
    s = 0;
    s++;
    i = s + 2;

    printf("i:%d, s: %d", i, s);
    return 0;
}