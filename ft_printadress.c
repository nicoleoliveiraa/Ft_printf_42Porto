int ft_getadress(int num)
{
    char    *hexa;
    int c;

    c = 0;
    hexa = "0123456789abcdef";
    if (num >= 16)
        ft_getadress(num / 16);
    c += write(1, &hexa[n % 16], 1);
    return (c);
}

int ft_printadress(int num)
{
    int c;

    c = 0;
    if (!num)
    {
        c += write(1, "(nil)", 5);
        return (c);
    }
    c += write(1, "0x", 2);
    c += ft_getadress(num);
    return (c);
}