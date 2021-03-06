/**
 * Date: 03-09-2021
 * by eddyruv
 **/
#include <stdio.h>
#include <string.h>


#define MAX_REMIND 50 /*maximum number of reminders*/
#define MSG_LEN 60    /*max length of reminder message*/

int read_line(char str[], int n);

int main(void){
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[10], msg_str[MSG_LEN + 1];
    int day, hr, min, i, j, num_remind = 0;

    for (;;)
    {
        if(num_remind == MAX_REMIND){
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day, time(24-hour) and reminder: ");
        scanf("%2d", &day);
        if (day == 0)
            break;
        if(day < 0 || day > 31)
        {
            printf("Wrong date.\n");
            continue;
        }
        scanf("%2d:%2d", &hr, &min);
        sprintf(day_str, "%2d %.2d:%.2d", day, hr, min);
        read_line(msg_str, MSG_LEN);

        for (i = 0;  i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Time  Reminder\n");
    for (i = 0; i <num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n){
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
    return i;
}