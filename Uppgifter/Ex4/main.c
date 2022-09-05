#include<stdio.h>
#include<conio.h>
#include<time.h>

int show_date()
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("Current Date: %d-%d-%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    getch();

}

main()
{
    show_date();
    return 1;
}
