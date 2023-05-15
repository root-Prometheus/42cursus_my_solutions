#include <unistd.h>

int	ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}
void my_own_itoa(long long int number)
{
	if(number != 0)
	{
		my_own_itoa(number / 10);
		write(1,&"0123456789"[number % 10],1);
	}
	else
		return;
}
int main(int argc, char **argv)
{
	long long int x = 1;
	int y = 0;
	long long int number = 0;
	long long int results[9];
	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		long long int results[number];
		while (x <= 9)
		{
			results[y] = number * x;
			x++;
			y++;
		}
		x = 0;
		y = 0;
		while(x < 9)
		{
			write(1,&"123456789"[x],1);
			write(1," x ",3);
			my_own_itoa(number);
			write(1," = ",3);
			my_own_itoa(results[y]);
			x++;
			y++;
			write(1,"\n",1);
		}
	}
	else
	{
		write(1,"\n",1);
	}
}
