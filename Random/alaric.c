/**
 * @file alaric.c
 * @author Edwin Ajong (edwinajong@gmail.com)
 * @brief Calculate time
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void) {
  int hour1, hour2, min1, min2, hourDiff, minDiff;

  printf("Enter 1st time: ");
  scanf("%2d:%2d", &hour1, &min1);
  printf("Enter 2nd time: ");
  scanf("%2d:%2d", &hour2, &min2);

  if(hour1 > 24 || hour2 > 24) {
    printf("Invalid: Hour cannot be greater than 24");
    return 1;
  }

  if(min1 > 60 || min2 > 60) {
    printf("Invalid: Minutes cannot be greater than 60");
    return 1;
  }

  if(hour2 < hour1) {
    hour2 += 24;
  }

  hourDiff = hour2 - hour1;
  minDiff = min2 - min1;

  if(minDiff < 0) {
    minDiff += 60;
    hourDiff -= 1;
  }

  printf("Difference in time is %.3d Hours and %.3d Minutes\n", hourDiff, minDiff);

  return 0;
  
}
