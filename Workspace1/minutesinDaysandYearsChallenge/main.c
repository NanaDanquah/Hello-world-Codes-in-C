#include <stdio.h>

int main()
{
    int minutes = 0;
    double minutesInYear = 0.00;
    double years = 0.00;
    double days = 0.00;
    
    
    printf("Please enter the minutes you want convert to days and years\n");
    scanf("%d", &minutes);
    
    minutesInYear = (60*24*365);
    years = (minutes/minutesInYear);    
    days = ((minutes/60.0)/24.0);
    
    
    printf("%d minutes is equivalent to:\n%f year(s)\n%f in day(s)", minutes, years, days);
    
    return 0;
}