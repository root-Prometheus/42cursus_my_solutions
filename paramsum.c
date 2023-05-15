#include <unistd.h>

void own(int number)
{
    if (number % 10 == 0)
    {
        return;
    }
    else
    {
        own(number / 10);
        write(1,&"0123456789"[number % 10],1);
    }
    

}
int  main(int argc, char **argv)
{
    if (argc > 1)
    {
        own(argc - 1);
        write(1,"\n",1);
        (void)argv;
    }
    else
        write(1,"0\n",2);
}