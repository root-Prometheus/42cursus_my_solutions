#include <unistd.h>

int main(int argc,char **argv)
{
    int i;
    int z;
    int x;
    
    x = 0;
    z = 0;
    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 90)
            {
                x = argv[1][i] - 'A';
                for(z = -1;z < x;z++)
                    write(1,&"ABCDEFGHIJKLMNOPQRSTUVWXYZ"[x],1);
            }
            else if(argv[1][i] >= 97 && argv[1][i] <= 122)
            {
                x = argv[1][i] - 'a';
                for(z = -1;z < x;z++)
                    write(1,&"abcdefghijklmnopqrstuvwxyz"[x],1);
            }
            else
                write(1,&argv[1][i],1);
            i++;
        }
    }
    else
        write(1,"\n",1);
}