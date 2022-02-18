/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:46:45 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/15 12:19:20 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	while (str[i])
	{
		if (str[i] == to_find[f])
		{
			if (to_find[f + 1] == '\0')
				return (&str[i - f]);
			f++;
		}
		else
		{
			f = 0;
		}
		i++;
	}
	return (str);
}
