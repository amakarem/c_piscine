/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:28:20 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 04:15:20 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_in[4][4];
int	g_out[4][4];

int	ft_validate(int validate_input, int arr[4][4]);
int	ft_format(char *str, int g_in[4][4]);
int	ft_print_output(int arr[4][4]);
int	ft_printf(char *str);
int	ft_solve_col_4_ext1(int g_in[4][4], int g_out[4][4]);
int	ft_solve_row_4_ext1(int g_in[4][4], int g_out[4][4]);
int	ft_solve_col_next(int g_out[4][4]);
int	ft_solve_row_next(int g_out[4][4]);
int	ft_col_find_4_ext1(int i, int g_out[4][4]);
int	ft_col_find_4_ext2(int i, int g_out[4][4]);

void	ft_solve_col_4(void)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (g_in[0][col] == 4)
		{
			g_out[0][col] = 1;
			g_out[1][col] = 2;
			g_out[2][col] = 3;
			g_out[3][col] = 4;
		}
		else if (g_in[0][col] == 1)
			g_out[0][col] = 4;
		if (g_in[1][col] == 1)
			g_out[3][col] = 4;
		else if (g_in[1][col] == 4)
		{
			g_out[3][col] = 1;
			g_out[2][col] = 2;
			g_out[1][col] = 3;
			g_out[0][col] = 4;
		}
		col++;
	}
}

void	ft_col_find_4(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (g_in[0][i] <= g_in[1][i] && g_out[0][i] == 0)
		{
			g_out[0][i] = 4 - g_in[0][i] + 1;
			ft_col_find_4_ext1(i, g_out);
		}
		else if (g_in[0][i] >= g_in[1][i] && g_out[0][i] == 0)
		{
			g_out[3][i] = 4 - g_in[1][i] + 1;
			ft_col_find_4_ext2(i, g_out);
		}
		i++;
	}
}

void	ft_solve_row_4(void)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (g_in[2][row] == 4)
		{
			g_out[row][0] = 1;
			g_out[row][1] = 2;
			g_out[row][2] = 3;
			g_out[row][3] = 4;
		}
		else if (g_in[2][row] == 1)
			g_out[row][0] = 4;
		if (g_in[3][row] == 1)
			g_out[row][3] = 4;
		else if (g_in[3][row] == 4)
		{
			g_out[row][3] = 1;
			g_out[row][2] = 2;
			g_out[row][1] = 3;
			g_out[row][0] = 4;
		}
		row++;
	}
}

int	main(int argc, char	**argv)
{
	if (argc != 2)
	{
		ft_printf("ERROR\n");
		return (1);
	}
	else if (ft_validate(ft_format(argv[1], g_in), g_in) != 16)
	{
		ft_printf("ERROR\n");
		return (1);
	}
	ft_solve_col_4();
	ft_solve_row_4();
	ft_col_find_4();
	ft_solve_col_4_ext1(g_in, g_out);
	ft_solve_row_4_ext1(g_in, g_out);
	ft_solve_col_next(g_out);
	ft_solve_row_next(g_out);
	ft_print_output(g_out);
	return (0);
}
