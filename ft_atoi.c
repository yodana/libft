#include "libft.h"

int ft_atoi(const char *nptr)
{
	unsigned int res;
    int i;
    int sign;
    
	sign = 1;
    i = 0;
    res = 0;
    while ((nptr[i] <= 32 || nptr[i] == '+') && nptr[i] != '\e')
        i++;
    if (nptr[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (ft_isdigit((int)nptr[i]))
    {
        res = res * 10;
        res = res + (nptr[i] - '0');
        i++;
    }
	if (res > 2147483647 && sign == 1)
		return (-1);
	else if (res > 2147483648 && sign == -1)
		return (0);
    return ((int)res * sign);
}
