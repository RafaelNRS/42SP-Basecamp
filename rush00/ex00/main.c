/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:04:46 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/12 14:44:04 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_check_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - 48);
	else
		return (-1);
}

int	ft_mini_atoi(char *c)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (c[i])
	{	
		if (ft_check_digit(c[i]) >= 0)
			x = (x * 10) + c[i] - 48;
		else
			return (0);
		i++;
	}
	return (x);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc == 3)
	{
		x = ft_mini_atoi(argv[1]);
		y = ft_mini_atoi(argv[2]);
		rush(x, y);
	}
	return (0);
}
