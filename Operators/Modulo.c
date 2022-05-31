#include <stdio.h>

int main() {
  
  int endingDayOfWeek = 0;
  int daysThatPass=16;
  int daysInWeek=7;

/*
Your task is to use modulo logic to determine the day of the week it will be after n days pass.
*/
  endingDayOfWeek = daysThatPass%daysInWeek;

  printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek);
}