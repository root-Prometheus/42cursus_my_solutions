#include <stdlib.h>
#include <unistd.h>
void print_num(int temp)
{
    if (temp <=9)
        exit(write(1,&"0123456789"[temp],1));
    else{
        write(1,&"0123456789"[temp / 10],1);
        print_num(temp % 10);
    }
}
int atoi(const char *str)
{
    int x = 0;
    int temp = 0;
    while(str[x] != '\0')
    {
        temp = (temp * 10) + (str[x] - '0');
        x++;
    }
    return temp;
}
int main(int argc, char **argv)
{
    int x = 2;
    int numbers = 0;
    int result = 0;

    if (argc == 2)
    {
        numbers = atoi(argv[1]);
        while(x <= numbers)
        {
            if (x % 2 != 0 || x == 2){
                result = result + x;
            }
            x++;
        }
        print_num(result);
    }
    else{
        write(1,"0",1);
        write(1,"\n",1);
    }
}
