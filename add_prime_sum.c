#include <unistd.h>

int ft_atoi(char *number)
{
    int x = 0;
    int val = 1;
    int ct = 0;
    if(number[0] == '-')
    {
        val = val * -1;
        x++;
    }
    while(number[x])
    {
        ct = (ct * 10) + (number[x] - '0');
        x++;
    }
    return ct * val;
}
void p_itoa(int number)
{
    if (number != 0)
    {
        p_itoa(number / 10);
        write(1,&"0123456789"[number % 10],1);
    }
    return;
}
int main(int argc,char **argv)
{
    int number = 0,count = 2,result = 0,counter = 0,val = 1;
    if (argc == 2)
    {
        number = ft_atoi(argv[1]);
        while (count <= number)
        {   
            counter = 2;
            val = 1;
            while(counter < count)
            {
                if(count % counter == 0)
                {
                    val = 0;
                    break;
                }
                counter++;
            }
            if (val == 1)
                result = result + count;
            count++;
        }
        p_itoa(result);
    }
    write(1,"\n",1);
}