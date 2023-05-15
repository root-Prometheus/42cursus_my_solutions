#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
    int i,x,z;
    i = 0;
    x = 0;
    z = 0;

    if (argc >= 4)
    {
        if (argc == 4)
        {
            i = atoi(argv[1]);
            x = atoi(argv[3]);
            if (*argv[2] == '+' || *argv[2] == '-')
            {
                if(*argv[2] == '+')
                    z = i + x;
                else
                    z = i - x;
            }
            else
            {
                if (*argv[2] == '*' || *argv[2] == '/')
                {
                    if (*argv[2] == '*')
                        z = i * x;
                    else
                        z = i / x;
                }
            }
            printf("%d\n",z);
        }
    }
    else
        printf("\n");
}