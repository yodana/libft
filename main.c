
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
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
		ft_putchar('\n');
		i++;
	}
	char dest[7] = "al";
	char src[6] = "av";
	char dest2[7] = "salutii";
	char src2[6] = "bonou";
	i = 0;
	memccpy(dest,src,'j',5);
	ft_memccpy(dest2,src2,'j',5);
	while (i < 6)
	{
		ft_putstr("\nTest du memccpy: ");
		ft_putchar(dest[i]);
		ft_putstr("     Test du ft_memccpy:  ");
		ft_putchar(dest2[i]);
		i++;
	}
	char dest3[7] = "loilol";
	char src3[4] = "lol";
	ft_putnbr(memcmp(dest,src,3));
	ft_putchar('\n');
	ft_putnbr(ft_memcmp(dest,src,3));
	ft_putchar('\n');
	ft_putstr("Test du ft_strstr: ");
	ft_putstr(ft_strstr(dest3, src3));
	ft_putchar('\n');
	ft_putstr("Test du strstr: ");
	ft_putstr(strstr(dest3, src3));
	ft_putchar('\n');
	char src4[] = "99999999999999999999999999999999999999999";
	ft_putstr("Test du ft_atoi: ");
	ft_putnbr(ft_atoi(src4));
	ft_putchar('\n');
	ft_putstr("Test du atoi:  ");
	ft_putnbr(atoi(src4));
	ft_putchar('\n');
	ft_putstr("Test du ft_toupper:   ");
	ft_putchar(ft_toupper(65));
	ft_putchar('\n');
	ft_putstr("Test du toupper:   ");
	ft_putchar(toupper(65));
	ft_putchar('\n');
	char src5 = "bonjour";
	ft_strdel(src5);
	ft_putstr(src5);
	ft_putchar('\n');
	return 0;
}
