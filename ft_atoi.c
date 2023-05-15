
int ft_strlen(const char *str) {
    int len = 0;

    while (str[len])
        len++;
    return len;
}
int	ft_atoi(const char *str){
    int len = ft_strlen(str);
    int x = 0;
    int sonuc = 0;
    while(x < len)
    {
        sonuc = (sonuc * 10) + (str[x] - '0');
        x++;
    }
    return sonuc;
}
/*
#include <stdio.h>
int main(void)
{
    const char buf[] = "162334134";
    int num;
    num = ft_atoi(buf);
    printf("%d\n", num);
}*/