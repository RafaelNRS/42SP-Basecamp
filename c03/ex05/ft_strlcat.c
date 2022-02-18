/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:46:45 by ranascim          #+#    #+#             */
/*   Updated: 2022/02/15 12:21:17 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count_d;
	unsigned int	count_s;

	i = 0;
	count_d = ft_strlen(dest);
	count_s = ft_strlen(src);
	if (size <= count_d)
		return (size + count_s);
	while (src[i] && count_d + 1 < size)
	{
		dest[count_d] = src[i];
		count_d++;
		i++;
	}
	dest[count_d] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
