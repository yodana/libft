
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
	return 0;
}
