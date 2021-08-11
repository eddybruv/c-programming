/*Date: 11-08-2021
    by eddybruv
    */

#include <stdio.h>

#define QUIZ 5
#define STDUENT 5

int main(void){
    int score[QUIZ][STDUENT], i, j, total = 0, quiz_total = 0, avg;
    int highscore = score[0][0], low_score = score[0][1];
    
    
    for(i = 0; i < QUIZ; i++){
        printf("Scores for Student %d: ", i + 1);
        for(j = 0; j < STDUENT; j++){
            scanf("%d", &score[i][j]);
        }
    }
    printf("%d\n1", low_score);

    for(i = 0; i < QUIZ; i++){
        for(j = 0; j < STDUENT; j++){
            total += score[i][j];
        }
        avg = total / 5; 
        printf("\nTotal score for student %d: %d\n", i + 1, total);
        printf("And average score is: %d\n", avg);
        total = 0;
    }

    for(i = 0; i < QUIZ; i++){
        for(j = 0; j < STDUENT; j++){
            quiz_total += score[j][i];

            if(highscore < score[j][i])
                highscore = score[j][i];
            if(low_score > score[j][i])
                low_score = score[j][i];

        }
        printf("\nTotal for quiz %d: %d\n", i + 1, quiz_total);
        printf("Highest score: %d\n", highscore);
        printf("Lowest score: %d\n", low_score);

        quiz_total = 0;
    }
    return 0;
}