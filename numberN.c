
#include <stdio.h>

int main()
{
    int n, num = 0;
    printf("Enter any number to print in words: ")
    scanf("%d",num);
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            
        }
        
        num = num / 10;
    }

    return 0;
    }
