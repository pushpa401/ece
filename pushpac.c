#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dat,mont,years;
    char day;
    printf("enter the year :");
    scanf("%d",&years);
    printf("enter the month:");
    scanf("%d",&mont);
    printf("enter the date:");
    scanf("%d",&dat);
    weekday(dat,mont,years);
    return 0;
}
int weekday(int date,int month,int year){
   int dayweek,yr,yd;
    yr=year%100;
    yd=year/100;
    printf("\nthe date given is : %d/%d/%d\n\n",date,month,year);
    dayweek=1.25*yr+findm(month,year)+date-2*(yd%4);
    dayweek=dayweek%7;
    switch(dayweek)
    {
        case 0:printf("day of week of the date is:saturday");
        break;
        case 1:printf("day of week of the date is:sunday");
        break;
        case 2:printf("day of week of the date is:monday");
        break;
        case 3:printf("day of week of the date is:tuesday");
        break;
        case 4:printf("day of week of the date is:wednesday");
        break;
        case 5:printf("day of week of the date is:thursday");
        break;
        case 6:printf("day of week of the date is:friday");
        default:printf("the given input data is wrong");
    }
    return 0;
}
    int findm(int months,int yearss){

        int findmonth,leapyr;
        if((yearss%100==0)&&(yearss%400!=0))
        leapyr=0;
        else if(yearss%4==0)
        leapyr=1;
        else
        leapyr=0;
        findmonth=3+(2-leapyr)*((months+2)/(2*months))+(5*months+months/9)/2;
        findmonth=findmonth%7;
        return findmonth;
    }





