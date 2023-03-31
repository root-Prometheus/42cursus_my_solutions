#include <unistd.h>

int check(char *str,char word)
{
    int x = 0;

    while(str[x] != '\0')
    {
        if(str[x] == word)
            return 1;
        x++;
    }
    return 0;
}
int main(int argc, char **argv)
{
    int i = 0;
    int x = 0;
    char word[999];
    if (argc == 3)
    {
        while(argv[1][i] != '\0')
        {
            if (check(&argv[2][i],argv[1][i]) == 1)
            {
                if(check(word,argv[1][i]) == 0)
                {
                    word[x] = argv[1][i];
                    x++;
                }
            }
            i++;
        }
        write(1,word,x);
        write(1,"\n",1);
    }
    else
        write(1,"\n",1);
}
