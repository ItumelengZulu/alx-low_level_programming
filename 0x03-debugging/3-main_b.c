#include <stdio.h>

void print_remaining_days(int month, int day, int year);

int main(void)
{
    int month, day, year;

    month = 2;
    day = 29;
    year = 2000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    print_remaining_days(month, day, year);

    return (0);
}

