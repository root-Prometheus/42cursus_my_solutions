//max ı yanlış anlamışım dizideki en büyük sayıyı soruyo ben dizide en çok tekrar edeni sayının kaç kere tekrar ettiğini buldum
int		max(int* tab, unsigned int len)
{
    unsigned int max = 0;
    unsigned int x = 0,i = 0,count = 0;

    while(x < len)
    {
        
        i = 0;
        while(i < len)
        {
            if(tab[i] == tab[x])
                count++;
            i++;
        }
        if (max < count)
            max = count;
        count = 0;
        x++;
    }
    return max;
}
