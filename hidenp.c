#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0,y = 0;
    if (argc == 3)
    {
        while(argv[2][i] != '\0')
        {
            if (argv[1][y] == argv[2][i])
            {
                y++;
            }
            if(argv[1][y] == '\0')
            {
                write(1,"1",1);
                break;
            }
            i++;
        }
        if(argv[1][y] != '\0')
        {
            write(1,"0",1);
        }
    }
    write(1,"\n",1);
}