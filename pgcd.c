#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int number1 = 0;
    int number2 = 0;
    int x = 2,y = 0,max = 1;
    if (argc == 3)
    {
        number1 = atoi(argv[1]);
        number2 = atoi(argv[2]);
        if (number1 > number2)
            y = number2;
        else
            y = number1;
        while(1)
        {
            if(number1 % x == 0 && number2 % x == 0)
            {
                if(x > max)
                    max = x;
            }
            x++;
            if(x == y)
                break;
        }
        printf("%d\n",max);
    }
    else
        printf("\n");
}