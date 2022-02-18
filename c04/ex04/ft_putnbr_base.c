/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:41:27 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/16 15:27:03 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_repeat(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i - 1;
		while (j >= 0 && i > 0 && j != i)
		{
			if (str[i] == str[j])
				return (0);
			j--;
		}
		i++;
	}
	return (1);
}

void	ft_convert(int nbr, char *base, int n_base)
{
	long nbr_l;

	nbr_l = nbr;
	if (nbr_l < 0)
	{
		ft_putchar('-');
		nbr_l = nbr_l * -1;
	}
	if (nbr_l >= n_base)
		ft_convert(nbr_l / n_base, base, n_base);
	ft_putchar(base[nbr_l % n_base]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	n_base;

	if (!(ft_strlen(base) > 1 && ft_check_repeat(base) == 1))
		return ;
	n_base = ft_strlen(base);
	ft_convert(nbr, base, n_base);
}
