/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:12:53 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/03 16:24:36 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_c;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_array(char *arr, int index)
{
	int		i;
	char	t;

	i = 0;
	while (i < index)
	{
		t = arr[i] + 48;
		ft_putchar(t);
		i++;
	}
}

void	ft_print_comb2(int n, int last, char *arr, int index)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if ((i > last || n == index) && (n != 1))
		{
			arr[index - n] = i;
			ft_print_comb2(n - 1, i, arr, index);
		}
		else if (i > last && n == 1)
		{
			arr[index - n] = i;
			if (g_c > 0)
			{
				write(1, ", ", 2);
			}
			ft_print_array(arr, index);
			g_c++;
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];
	int		last;

	last = 0;
	g_c = 0;
	ft_print_comb2(n, last, arr, n);
}
