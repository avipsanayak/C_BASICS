#include <stdio.h>

typedef struct
{
    int hours;
    int minutes;
    int seconds;
} 
TIME;
TIME add(TIME x, TIME y)
{
    TIME sum;
    sum.seconds = x.seconds + y.seconds;
    sum.minutes = x.minutes + y.minutes;
    sum.hours = x.hours + y.hours;
    if (sum.seconds >= 60)
    {
        sum.minutes++;
        sum.seconds -= 60;
    }
    if (sum.minutes >= 60)
    {
        sum.hours++;
        sum.minutes -= 60;
    }
    return sum;
}

int main()
{
    TIME start, stop, sum, diff;
    printf("Enter hours, minutes and seconds of start time: ");
    scanf("%d%d%d", &start.hours, &start.minutes, &start.seconds);
    printf("Enter hours, minutes and seconds of stop time: ");
    scanf("%d%d%d", &stop.hours, &stop.minutes, &stop.seconds);
    sum = add(start, stop);
    printf("Sum: %d:%d:%d\n", sum.hours, sum.minutes, sum.seconds);
    return 0;
}