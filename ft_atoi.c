#include "libft.h"

int ft_atoi(const char *nptr)
{
    unsigned int res;
    int i;
    int sign;

    sign = 1;
    i = 0;
    res = 0;
    while (nptr[i] <= 32 || nptr[i] == '+')
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
    return ((int)res * sign);
}