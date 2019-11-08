/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : fonction_verif.c

* Purpose :

* Creation Date : 27-08-2018

* Last Modified : Lun 27 aoû 18:30:12 2018

* Created By :  

_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void	ft_putnbr(int nb);

int		ft_verif(int rack[9][9], int verif[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (verif[i][j] == 0)
				if (rack[i][j] == 0)
				{
					write(2, "Error\n", 6);
					return (0);
				}
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_check_attribut(int rack[9][9], char *line[9], int i, int j)
{
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (line[i][j] > '0' && line[i][j] <= '9')
				rack[i][j] = line[i][j] - 48;
			else if (line[i][j] == '.')
				rack[i][j] = 0;
			else
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		if (line[i][j])
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_int_check(int rack[9][9], char *line[9])
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (ft_check_attribut(rack, line, i, j) == 1)
		return (1);
	else
		return (0);
}

void	ft_verif_4(int verif[9][9], int rack[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			verif[i][j] = rack[i][j];
			j++;
		}
		i++;
	}
}
