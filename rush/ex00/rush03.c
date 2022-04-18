/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbilyk <sbilyk@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:54:37 by sbilyk            #+#    #+#             */
/*   Updated: 2022/04/03 10:57:14 by sbilyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	checktop(int a, int x)
{
	while (a > 0)
	{
		if (a == x)
			ft_putchar('A');
		else
			if (a == 1)
				ft_putchar('C');
		else
			ft_putchar('B');
		a --;
	}
}

void	checkav(int a, int b, int x)
{
	while (b > 0)
	{
		while (a > 0)
		{
			if (a == x || a == 1)
			{
				ft_putchar('B');
				if (a == 1)
					ft_putchar('\n');
			}
			else
				ft_putchar(' ');
			a--;
		}
		b--;
		a = x;
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x <= 0 || y <= 0)
	{
		write(1, "Write correct numbers, please!\n", 29);
		x = 0;
		y = 0;
	}
	a = x;
	b = y - 2;
	checktop(a, x);
	a = x;
	ft_putchar('\n');
	checkav(a, b, x);
	a = x;
	if (y != 1)
		checktop (a, x);
	ft_putchar('\n');
	ft_putchar('\n');
}
