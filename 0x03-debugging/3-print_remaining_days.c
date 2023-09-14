#include <stdio.h>

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account.
 * @month: month (1-12)
 * @day: day (1-31)
 * @year: year
 */
void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    int i;

    // Check if it's a leap year (divisible by 4 and not divisible by 100, or divisible by 400)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        days_in_month[2] = 29; // February has 29 days in a leap year
    }

    // Calculate the total days passed in the year
    for (i = 1; i < month; i++)
    {
        total_days += days_in_month[i];
    }

    total_days += day;

    // Print the remaining days
    printf("Remaining days: %d\n", 365 - total_days);
}

