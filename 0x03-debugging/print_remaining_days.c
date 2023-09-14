#include <stdio.h>

/**
 * is_leap_year - Checks if a year is a leap year
 * @year: Year to check
 * Return: 1 if it's a leap year, 0 otherwise
 */
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

/**
 * print_remaining_days - Takes a date and prints how many days are left
 * in the year, taking leap years into account.
 * @month: Month in number format (1-12)
 * @day: Day of the month (1-31)
 * @year: Year
 */
void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = day;

    if (is_leap_year(year))
    {
        days_in_month[2] = 29; // February has 29 days in a leap year
    }

    for (int i = 1; i < month; i++)
    {
        total_days += days_in_month[i];
    }

    printf("Day of the year: %d\n", total_days);
    printf("Remaining days: %d\n", is_leap_year(year) ? 366 - total_days : 365 - total_days);
}

