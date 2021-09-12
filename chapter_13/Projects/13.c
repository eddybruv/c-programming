/**
 * Date: 12-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <ctype.h>

#define SIZE 80

void encrpyt(char *message, int shift);
void read_line(char *message);

int main(void)
{
    char message[SIZE];
    int shift;
    printf("Enter message: ");
    read_line(message);
    printf("Enter secret key: ");
    scanf("%d", &shift);
    encrpyt(message, shift);
    printf("Encrypte message: %s", message);
}

void read_line(char *message)
{
    int ch, i = 0;
    while((ch = getchar()) != '\n' && i < SIZE)
        message[i++] = ch;

    message[i] = '\0';
}

void encrpyt(char *message, int shift)
{
    int i = 0;

    for(i = 0; message[i] != '\0'; i++){
        if(isalpha(message[i])){
            if(islower(message[i]))
                message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
            else
                message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
        }
    }
}