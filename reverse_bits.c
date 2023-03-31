unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;
  unsigned char tmp = 0;

	while (i > 0)
	{
    tmp = res >> 1;
		res = tmp + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
