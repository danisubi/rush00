/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbilyk <sbilyk@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:03:12 by sbilyk            #+#    #+#             */
/*   Updated: 2022/04/03 11:03:21 by sbilyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	checktop(int a, int x)
{
	while (a > 0)
	{
		if (a == x)
			ft_putchar('/');
		else
			if (a == 1)
				ft_putchar('\\');
		else
			ft_putchar('*');
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
				ft_putchar('*');
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

void	checkbottom(int a, int x)
{
	while (a > 0)
	{
		if (a == x)
			ft_putchar('\\');
		else
			if (a == 1)
				ft_putchar('/');
		else
			ft_putchar('*');
		a--;
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
		checkbottom (a, x);
	ft_putchar('\n');
	ft_putchar('\n');
}