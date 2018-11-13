
#include "includes/libft.h"
#include <stdio.h>

int main()
{
	ft_putstr("Test 0 du ft_putnbr : ");
	ft_putnbr(42);
	ft_putchar('\n');	
	ft_putstr("Test 1 du ft_putnbr: ");
	ft_putnbr(2147483647);
	ft_putchar('\n');
    ft_putstr("Test 2 du ft_putnbr: ");
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putstr("Test 1 du ft_strnew: ");
	ft_putstr(ft_strnew(7));
	ft_putchar('\n');
	char num[5];
	int i = 0;
	ft_memset(num, 97, sizeof(num));
	while (i < 5)
	{
		ft_putstr(" Test du ft_memset: ");
		ft_putchar(num[i]);
		i++;
	}
	char dest[5] = "salut";
	char src[6] = "bonjou";
	ft_memcpy(dest,src,97);
	i = 0;
	while (i < 5)
	{
		ft_putstr("Test du ft_memcpy: ");
		ft_putchar(dest[i]);
		i++;
	}
	ft_putchar('\n');
	return 0;
}
