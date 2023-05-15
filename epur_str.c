#include <unistd.h>

int main(int argc, char **argv)
{
    int labelx = 1,labely = 0;

    if (argc == 2)
    {
        while(argv[labelx] != NULL)
        {
            labely = 0;
            while(argv[labelx][labely] != '\0')
            {
                if (argv[labelx][labely] != ' ' && argv[labelx][labely] != '\t')
                {
                    while (argv[labelx][labely] != ' ' && argv[labelx][labely] != '\t')
                    {
                        write(1,&argv[labelx][labely],1);
                        labely++;
                    }
                    if(argv[labelx][labely + 1] != '\0')
                        write(1," ",1);
                }
                labely++;

            }
            labelx++;
        }    
    }
    write(1,"\n",1);
    return 0;
}