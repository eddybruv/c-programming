/**
 * Date: 31-08-2021
 * by eddybruv
 * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define EMPTY_CELL '.'
#define BLOCKED (blocked[0] == true && blocked[1] == true && blocked[2] == true && blocked[3] == true)
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

int main(void)
{
    char maze[10][10], prev;
    int row, col, direction, i;
    bool blocked[4] = {false};

    srand((unsigned) time(NULL));

    /*Filling the blank maze array*/
    for(row = 0; row < 10;row++)
        for(col = 0; col < 10; col++)
            maze[col][row] = EMPTY_CELL;

    /* starting off the path */

    row = col = 0;
    maze[row][col] = prev = 'A';

    /*loop to create the path */
    while (maze[row][col] != 'Z' && BLOCKED == false)
    {

        /*Get random direction */
        direction = rand() % 4;

        /*Check if direction is valid*/
        if(direction == UP)
        {
            if(row - 1 >= 0&& maze[row - 1][col] == EMPTY_CELL)
                row--;
            else
            {
                blocked[direction] = true;
                continue;
            }
        }

        else if(direction == RIGHT)
        {
            if(col + 1 <= 9 && maze[row][col + 1] == EMPTY_CELL)
                col++;
            else
            {
                blocked[direction] = true;
                continue;
            }
        }
        else if(direction == DOWN)
        {
            if(row + 1 <= 9 && maze[row + 1][col] == EMPTY_CELL)
                row++;
            else
            {
                blocked[direction] = true;
                continue;
            }
        }
        else if(direction == LEFT)
        {
            if (col -1 >= 0 && maze[row][col - 1] == EMPTY_CELL)
                col--;

            else
            {
                blocked[direction] = true;
                continue;
            }
        }

        /* Direction is valid, set the next character
         * and clear the blocked check
         */
        maze[row][col] = prev = prev + 1;
        for (i = 0; i < 4; i++)
            blocked[i] = false;
    }

    /* Print the maze */
    printf("\n");
    for (row = 0; row < 10; row++)
    {
        for (col = 0; col < 10; col++)
            printf("%c ", maze[col][row]);
        printf("\n");
    }

    printf("\n");

    return 0;
}