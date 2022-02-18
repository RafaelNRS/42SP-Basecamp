/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:16:29 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/15 18:20:50 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_mapped(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_convert(int off, int start, char *str, char *base)
{
	int	num;
	int	sum;
	int	m;

	m = 1;
	sum = 0;
	while (start + off > start)
	{
		if (m == 0)
		{
			num = ft_is_mapped(str[start + off - 1], base);
			m++;
		}
		else
		{
			num = ft_is_mapped(str[start + off - 1], base) * m;
			m = m * ft_strlen(base);
		}
		sum = sum + num;
		off--;
	}
	return (sum);
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	is_neg;
	int	found;
	int	sum;

	if (ft_strlen(base) <= 1 || ft_check_repeat(base) == 0)
		return (0);
	i = 0;
	is_neg = 1;
	found = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg = is_neg * -1;
		i++;
	}
	while (ft_is_mapped(str[i + found], base) != -1 && str[i + found])
		found++;
	sum = ft_convert(found, i, str, base);
	return (sum * is_neg);
}
