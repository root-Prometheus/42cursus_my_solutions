#include <unistd.h>

int main(int argc,char **argv)
{
    int i;
    int x;

    x = 0;
    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                x = argv[1][i] - 'a';
                write(1,&"ABCDEFGHIJKLMNOPQRSTUVWXYZ"[x],1);
            }
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                x = argv[1][i] - 'A';
                write(1,&"abcdefghijklmnopqrstuvwxyz"[x],1);
            }
            else
                write(1,&argv[1][i],1);
            i++;
        } 
        write(1,"\n",1);
    }
    else
        write(1,"\n",1);
}