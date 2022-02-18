/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:22:05 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/11 15:30:22 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		tmp_nb;
	char	p_nb;

	tmp_nb = nb;
	if (tmp_nb < 0)
	{
		write(1, "-", 1);
		tmp_nb = tmp_nb * -1;
	}
	if (tmp_nb > 10)
	{
		ft_putnbr(tmp_nb / 10);
	}
	p_nb = (tmp_nb % 10) + 48;
	write(1, &p_nb, 1);
}
