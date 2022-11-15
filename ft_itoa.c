#include <stdlib.h>

static int	numlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*pf_itoa(int n)
{
	char	*p;
	int		i;
	long	nb;

	nb = n;
	i = numlen(nb);
	p = (char *) malloc ((i + 1) * sizeof(char));
	if (!p)
		return (0);
	if (nb == 0)
		p[0] = '0';
	if (nb < 0)
	{
		nb = nb * -1;
		p[0] = '-';
	}
	p[i--] = '\0';
	while (nb > 0)
	{
		p[i--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (p);
}

char	*pf_utoa(unsigned int n)
{
	unsigned int	nb;
	char			*p;
	int				i;

	nb = n;
	i = numlen(nb);
	p = (char *) malloc ((i + 1) * sizeof(char));
	if (!p)
		return (0);
	if (nb == 0)
		p[0] = '0';
	if (nb < 0)
	{
		nb = nb * -1;
		p[0] = '-';
	}
	p[i--] = '\0';
	while (nb > 0)
	{
		p[i--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (p);
}
