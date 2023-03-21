#include <stdio.h>
typedef struct date_time
{
    int date;
    int month;
    int year;
    int second ;
    int minute;
    int hour;

 }date_time;
void display(date_time d  )
{
    printf("The time stamp is : %d/%d/%d  at %d:%d;%d \n", d.date, d.month, d.year, d.second , d.minute, d.hour);
}
int datecmp(date_time d1, date_time d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }

    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }

    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }

    if (d1.date < d2.date)
    {
        return -1;
    }


    if (d1.hour > d2.hour)
    {
        return 1;
    }

    if (d1.hour < d2.hour)
    {
        return -1;
    }
    if (d1.minute > d2.minute)
    {
        return 1;
    }

    if (d1.minute < d2.minute)
    {
        return -1;
    }
    if (d1.second > d2.second)
    {
        return 1;
    }

    if (d1.second < d2.second)
    {
        return -1;
    }
    return 0;
}
int main()
{
    date_time d1 = {4, 4, 21 ,54, 20, 2};
    date_time d2 = {4, 4, 21 ,23, 34, 4};
    
    display(d1);
    display(d2);
    
    
    int a = datecmp(d1, d2 );
    printf(" Date comparison function returns :%d", a);
    return 0;
}