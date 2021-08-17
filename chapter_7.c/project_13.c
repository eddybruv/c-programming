/*Date: 17-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    printf("Enter a sentence: ");
    getchar();
    int ch;
    float words = 1, letters = 0;

    while((ch = getchar())!= '\n'){
        if(ch == ' ')
            words++;
         if(ch != ' ')
            letters++;
    }

    printf("Average word length: %.1f",(letters / words));
    return 0;
}