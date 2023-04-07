#include <stdio.h>

struct Time {
  unsigned char Hours;
  unsigned char Minutes;
  unsigned char Seconds;
  unsigned char Day;
  unsigned char Month;
  unsigned short Year;
};

int main() {
  struct Time t;

  printf("Enter the hours: ");
  scanf("%hhu", &t.Hours);

  printf("Enter the minutes: ");
  scanf("%hhu", &t.Minutes);

  printf("Enter the seconds: ");
  scanf("%hhu", &t.Seconds);

  printf("Enter the day: ");
  scanf("%hhu", &t.Day);

  printf("Enter the month: ");
  scanf("%hhu", &t.Month);

  printf("Enter the year: ");
  scanf("%hu", &t.Year);

  printf("The input time is: %02hhu:%02hhu:%02hhu %02hhu/%02hhu/%04hu\n",
         t.Hours, t.Minutes, t.Seconds, t.Day, t.Month, t.Year);

  printf("The size of the Time struct is: %zu bytes\n", sizeof(t));

  return 0;
}


