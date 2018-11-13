
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
<<<<<<< HEAD
	if(ft_isalpha(97))
		ft_putchar("ALPHABET WORK\n")
	ft_putstr("Test de is_alpha")
=======
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
>>>>>>> 023f0a0735a62dc6e00fe0c0ad42da232320347d
	return 0;
}
