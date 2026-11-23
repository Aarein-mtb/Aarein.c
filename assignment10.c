#include <stdio.h>

int main()
{
    int year, days, i, j, day = 0;
    int monthDays[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};

    char *months[] = {"January", "February", "March", "April",
                      "May", "June", "July", "August",
                      "September", "October", "November", "December"};

    printf("Enter year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        monthDays[1] = 29;

    printf("\nCalendar of %d\n", year);

    for(i = 0; i < 12; i++)
    {
        printf("\n\t%s\n", months[i]);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for(j = 0; j < day; j++)
            printf("    ");

        for(days = 1; days <= monthDays[i]; days++)
        {
            printf("%3d ", days);

            if((days + day) % 7 == 0)
                printf("\n");
        }

        day = (day + monthDays[i]) % 7;
        printf("\n");
    }

    return 0;
}
