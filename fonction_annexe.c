/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : fonction_annexe.c

* Purpose :

* Creation Date : 27-08-2018

* Last Modified : Lun 27 aoû 18:31:26 2018

* Created By :  

_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char n;

	n = '-';
	if (nb < 0)
	{
		ft_putchar(n);
		nb = nb * (-1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}
