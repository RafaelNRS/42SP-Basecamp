/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:09:10 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/07 13:51:02 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	max;
	int	tmp;
	int	i;

	i = 0;
	max = size / 2;
	while (i < max)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		size--;
		i++;
	}
}
