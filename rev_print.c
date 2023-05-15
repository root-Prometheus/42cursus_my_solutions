#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *array)
{
    int len;

    len = 0;
    while(array[len])
        len++;
    return len;
}
int main(int argc,char **argv)
{
    int i;
    int x;

    x = 0;
    i = 0;
    if (argc == 2)
    {   
        x = ft_strlen(argv[1]);
        x = x - 1;
         for (;x >= 0; x--)
            write(1,&argv[1][x],1);
        write(1,"\n",1);
    }
    else
        write(1,"\n",1);
}