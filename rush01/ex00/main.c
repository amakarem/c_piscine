/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:28:20 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 02:23:47 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_matrix[4][4];
int	g_output[4][4];

int	ft_validate(int validate_input, int arr[4][4]);

void	ft_print_output(int arr[4][4]);
void	ft_printf(char *str);

int	ft_format(char *str, int g_matrix[4][4]);

void	ft_solve_col_4(void)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (g_matrix[0][col] == 4)
		{
			g_output[0][col] = 1;
			g_output[1][col] = 2;
			g_output[2][col] = 3;
			g_output[3][col] = 4;
		}
		else if (g_matrix[0][col] == 1)
			g_output[0][col] = 4;
		if (g_matrix[1][col] == 1)
			g_output[3][col] = 4;
		else if (g_matrix[1][col] == 4)
		{
			g_output[3][col] = 1;
			g_output[2][col] = 2;
			g_output[1][col] = 3;
			g_output[0][col] = 4;
		}
		col++;
	}
}

void	ft_solve_col_4_ex1(void)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (g_matrix[0][col] == 1 && g_matrix[1][col] == 3)
			g_output[1][col] = 3;
		else if (g_matrix[1][col] == 1 && g_matrix[0][col] == 3)
			g_output[2][col] = 3;
		col++;
	}
}

void	ft_solve_col_next(void)
{
	int	col;
	int	row;

	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			if (g_output[row][col] != 0 && g_output[row][col] <= 4)
			{
				if (g_output[row + 1][col] == 0)
					g_output[row + 1][col] = g_output[row][col] + 1;
				if (g_output[row + 1][col] == 5)
				{
					g_output[row + 1][col] = 1;
				}
			}
			row++;
		}
		col++;
	}
}

void	ft_col_find_4(void)
{
	int	i;
	int x;

	i = 0;
	while (i < 4)
	{
		if (g_matrix[0][i] <= g_matrix[1][i] && g_output[0][i] == 0)
		{
			g_output[0][i] = 4 - g_matrix[0][i] + 1;
			x = 1;
			while (g_output[x][i] == 0 && x < 4 && g_output[x + 1][i] <= 3)
			{
				g_output[x][i] = g_output[x + 1][i] + 1;
				x++;
			}

		}
		else if (g_matrix[0][i] >= g_matrix[1][i] && g_output[0][i] == 0)
		{
			g_output[3][i] = 4 - g_matrix[1][i] + 1;
			x = 2;
			while (g_output[x][i] == 0 && x >= 0 && g_output[x + 1][i] <= 3)
			{
				g_output[x][i] = g_output[x + 1][i] + 1;
				x--;
			}

		}
		i++;
	}
}

void	ft_solve_row_next(void)
{
	int	col;
	int	row;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (g_output[row][col] != 0 && g_output[row][col] <= 4)
			{
				if (g_output[row + 1][col] == 0)
					g_output[row + 1][col] = g_output[row][col] + 1;
				if (g_output[row + 1][col] == 5)
				{
					g_output[row + 1][col] = 1;
				}
			}
			col++;
		}
		row++;
	}
}

void	ft_solve_row_4(void)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (g_matrix[2][row] == 4)
		{
			g_output[row][0] = 1;
			g_output[row][1] = 2;
			g_output[row][2] = 3;
			g_output[row][3] = 4;
		}
		else if (g_matrix[2][row] == 1)
			g_output[row][0] = 4;
		if (g_matrix[3][row] == 1)
			g_output[row][3] = 4;
		else if (g_matrix[3][row] == 4)
		{
			g_output[row][3] = 1;
			g_output[row][2] = 2;
			g_output[row][1] = 3;
			g_output[row][0] = 4;
		}
		row++;
	}
}

void	ft_solve_row_4_ext1(void)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (g_matrix[2][row] == 1 && g_matrix[3][row] == 3)
			g_output[row][1] = 3;
		if (g_matrix[3][row] == 1 && g_matrix[2][row] == 3)
			g_output[row][2] = 3;

		if (g_matrix[2][row] == 1 && g_matrix[3][row] == 2)
		{
			if (g_output[row][1] == 0 && g_output[row][2] == 0)
			{
				g_output[row][1] = 1;
				g_output[row][2] = 2;
			}
		}
		if (g_matrix[3][row] == 1 && g_matrix[2][row] == 2)
		{
			if (g_output[row][1] == 0 && g_output[row][2] == 0)
			{
				g_output[row][2] = 1;
				g_output[row][1] = 2;
			}
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
	else if (ft_validate(ft_format(argv[1], g_matrix), g_matrix) != 16)
	{
		ft_printf("ERROR\n");
		return (1);
	}
	ft_solve_col_4();
	ft_solve_col_4_ex1();
	ft_solve_row_4();
	ft_solve_row_4_ext1();
	ft_solve_col_next();
	ft_solve_row_next();
	ft_col_find_4();
	ft_print_output(g_output);
	return (0);
}
