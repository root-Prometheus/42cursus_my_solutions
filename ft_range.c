#include <stdlib.h>


int     *ft_range(int start, int end)
{
    int *array;
    int size = 0,i = 0;
    size = (end - start);
    if (size < 0)
        size = size * -1;
    array = (int *)malloc(size * sizeof(int));
    while(i <= size)
    {
        array[i] = start;
        start++;
        i++;
    }
    return array;
}
/*#include <stdio.h>
int main(void)
{
    int start = 0;
    int end = 0;
    int *array = ft_range(start,end);
    int i = 0;
    while(start <= end)
    {
        printf("%d\n",array[i]);
        i++;
        start++;
    }
}*/