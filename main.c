/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : main.c

* Purpose :

* Creation Date : 27-08-2018

* Last Modified : Lun 27 aoû 18:28:39 2018

* Created By :  

_._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

int		ft_verif(int rack[9][9], int verif[9][9]);

int		ft_int_check(int rack[9][9], char *line[9]);

void	ft_verif_4(int verif[9][9], int rack[9][9]);

int		ft_column(int k, int rack[9][9], int j);

int		ft_block(int k, int rack[9][9], int i, int j);

void	ft_print(int rack[9][9]);

int		ft_line(int k, int rack[9][9], int i);

int		ft_valid(int rack[9][9], int position)
{
	int i;
	int j;
	int k;

	if (position == 9 * 9)
		return (1);
	i = position / 9;
	j = position % 9;
	if (rack[i][j] != 0)
		return (ft_valid(rack, position + 1));
	k = 0;
	while (++k <= 9)
		if (ft_line(k, rack, i) && ft_column(k, rack, j) \
				&& ft_block(k, rack, i, j))
		{
			rack[i][j] = k;
			if (ft_valid(rack, position + 1))
				return (1);
		}
	rack[i][j] = 0;
	return (0);
}

int		main(int argc, char **argv)
{
	char	*line[9];
	int		rack[9][9];
	int		verif[9][9];
	int		i;

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	while (i + 1 < argc)
	{
		line[i] = argv[i + 1];
		i++;
	}
	if (ft_int_check(rack, line) == 0)
		return (0);
	ft_verif_4(verif, rack);
	ft_valid(rack, 0);
	if (ft_verif(rack, verif) == 0)
		return (0);
	ft_print(rack);
	return (0);
}
