/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:30:23 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/06 15:54:43 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	l;

	if (x < 1 || y < 1)
		return ;
	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 || c == x) && (l == 1 || l == y))
				ft_putchar('o');
			else if ((c == 1 || c == x) && (l != y && l != 1))
				ft_putchar('|');
			else if (c == 1 || c == x || l == 1 || l == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
