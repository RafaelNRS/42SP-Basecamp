/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:15:03 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/15 18:29:36 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	p_new_nb;
	long	new_nb;

	if (nb < 0)
	{
		write(1, "-", 1);
		new_nb = nb;
		new_nb = new_nb * -1;
	}
	else
		new_nb = nb;
	if (new_nb >= 10)
		ft_putnbr(new_nb / 10);
	p_new_nb = (new_nb % 10) + 48;
	write(1, &p_new_nb, 1);
}
