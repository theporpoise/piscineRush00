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