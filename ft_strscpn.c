int find(const char *path, const char word)
{
    int i = 0;
    while (path[i] != '\0')
    {
        if (path[i] == word)
            return i;
        i++;
    }
    return 0;
}
size_t	ft_strcspn(const char *s, const char *reject)
{
    int x = 0;
    int min = 999;
    int len1 = 0;

    while (reject[len1] != '\0')
    {
        if(find(s,reject[len1]) != 0)
        {
            x = find(s,reject[len1]);
            if (min > x)
                min = x;
        }
        len1++;
    }
    return min;
}
