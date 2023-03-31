#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int x = 0;
    if (argc == 2)
    {
        if(argv[1][x] ==  '\0')
            write(1,"\n",1);
        while(argv[1][x] != '\0')
        {
        
           if (argv[1][x] == ' ' && x != 0)
           {
                if (argv[1][x+1] != '\0') 
                    write(1,"   ",3);
                while(argv[1][x] == ' ')
                    x++;
           }
           else if (x == 0)
           {
            if (argv[1][0] == ' ')
                x++;
            else
                write(1,&argv[1][x++],1);
           }
           else{
            write(1,&argv[1][x],1);
            x++;
           }
            
        }
    }
    else
        write(1,"\n",1);
}
