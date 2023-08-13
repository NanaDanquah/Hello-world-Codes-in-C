#include <stdio.h>

int main()
{
    int age = 0;
    char name[100];
    
    printf("Please enter your name\n");
    
    scanf("%s", name);
    
    printf("Now enter your age\n");
    
    scanf("%d", &age);
    
    if (age < 18)
    {
     printf("Sorry %s, because your age is %d which is not 18 and above, you are not eligible to vote\n", name, age);    
    }
    else
    {
        printf("Bravo! %s, you are eligible to vote", name);
    }
    
    return 0;
}