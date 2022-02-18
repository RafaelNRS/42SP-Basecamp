/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:58:31 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/07 15:39:01 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char c)
{
	if (!((c >= 97 && c <= 122) || (c >= 65 && c <= 90)))
		return (0);
	return (1);
}

int	ft_str_is_lowercase(char c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

int	ft_str_is_uppercase(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}

int	ft_str_is_numeric(char c)
{
	if (!(c >= 48 && c <= 57))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		f;

	i = 0;
	f = 0;
	while (str[i])
	{
		if ((ft_str_is_alpha(str[i]) || ft_str_is_numeric(str[i])) && f == 0)
		{
			if (ft_str_is_lowercase(str[i]) == 1)
				str[i] = str[i] - 32;
			f = 1;
		}
		else if (ft_str_is_uppercase(str[i]) == 1 && f == 1)
		{
			str[i] = str[i] + 32;
		}
		else if (!(ft_str_is_lowercase(str[i]) || ft_str_is_numeric(str[i])))
		{
			f = 0;
		}
		i++;
	}
	return (str);
}
