/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:29:13 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/09 21:07:21 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(int a, int b)
{
	write(1, "\\", 1);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 9)
			ft_print_hex(48, str[i]);
		else if (str[i] >= 10 && str[i] <= 15)
			ft_print_hex(48, str[i] + 87);
		else if (str[i] >= 16 && str[i] <= 25)
			ft_print_hex(49, str[i] - 16);
		else if (str[i] >= 26 && str[i] <= 31)
			ft_print_hex(49, str[i] + 71);
		else if (str[i] == 127)
			write(1, "\\7f", 1);
		else
			write(1, &str[i], 1);
		i++;
	}	
}
