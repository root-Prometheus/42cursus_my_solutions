int lcm(int num1, int num2)
{
    unsigned int i;

    if (num1 > num2)
        i = num1;
    else 
        i = num2;
    if (num1 == 0 || num2 == 0)
        return 0;
    while(1)
    {
        if (i % num1 == 0 && i % num2 == 0) 
            return i;
        i++;
    }
}
/*#include <stdio.h>
int main()
{
    int x;
    x = lcm(6,8);
    printf("%d ", x);
}*/