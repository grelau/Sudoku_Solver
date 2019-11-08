/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : fonction_regle.c

* Purpose :

* Creation Date : 27-08-2018

* Last Modified : Lun 27 aoû 18:30:47 2018

* Created By :  

_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		ft_line(int k, int rack[9][9], int i)
{
	int j;

	j = -1;
	while (++j < 9)
		if (rack[i][j] == k)
			return (0);
	return (1);
}

void	ft_print(int rack[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(rack[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_column(int k, int rack[9][9], int j)
{
	int i;

	i = -1;
	while (++i < 9)
		if (rack[i][j] == k)
			return (0);
	return (1);
}

int		ft_block(int k, int rack[9][9], int i, int j)
{
	int i2;
	int j2;

	i2 = i - (i % 3);
	j2 = j - (j % 3);
	i = i2;
	while (i < i2 + 3)
	{
		j = j2;
		while (j < j2 + 3)
		{
			if (rack[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
