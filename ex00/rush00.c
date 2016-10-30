/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 15:07:08 by echeng            #+#    #+#             */
/*   Updated: 2016/07/17 15:09:06 by echeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_row(int x, char c, char d)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(d);
		}
		i++;
	}
	ft_putchar('\n');
}

int		rush00(int x, int y)
{
	int i;

	i = 1;
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			ft_print_row(x, 'o', '-');
		}
		else
		{
			ft_print_row(x, '|', ' ');
		}
		i++;
	}
	return (0);
}
