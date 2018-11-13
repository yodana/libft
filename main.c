
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
	if(ft_isalpha(97))
		ft_putchar("ALPHABET WORK\n")
	ft_putstr("Test de is_alpha")
	return 0;
}
