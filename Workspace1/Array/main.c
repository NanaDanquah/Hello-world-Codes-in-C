#include <stdio.h>

int main()
{
    int grades[10];
    int count= 10;
    long sum = 0;
    float average = 0.0;
    
    printf("Please enter the 10 grades: \n");
    
    //Read the 10 grades to be averaged
    
    int i;
    for(i = 0; i < count; ++i)
    {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];          //add it to sum variable
    }
    
    average = (float)sum/count;   //this is to calculate the average; however we have to change the data type to float
    
    printf("\nAverage of the ten grades entered is: %.2f\n", average);
    
    return 0;
    
}