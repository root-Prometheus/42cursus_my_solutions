#include <unistd.h>

int search(char *arr,char f)
{
    int x = 0;
    while(arr[x])
    {
        if(arr[x] == f)
            return 1;
        x++;
    }
    return 0;
}
int ft_strlen(char *arr)
{
    int len = 0;

    while(arr[len])
        len++;
    return len;
}
int main(int argc,char **argv)
{
    int x = 0,len = 0,y = 0;

    if (argc == 3)
    { 
        len = ft_strlen(argv[1]);
        char array[len];
        while(argv[1][x])
        {
            if (search(argv[2],argv[1][x]) == 1)
            {
                if(search(array,argv[1][x]) == 0)
                {
                    array[y] = argv[1][x];
                    y++;
                }
            }
            x++;
        }
        array[y] = '\0';
        write(1,array,y);
    }
    write(1,"\n",1);
}