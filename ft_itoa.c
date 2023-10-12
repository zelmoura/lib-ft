/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <zelmoura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:43:16 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/30 18:22:59 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_len(long n)
{
	int	length;

	length = 0;
	if (n <= 0)
	{
		length = length + 1;
		n *= -1;
	}
	while (n > 0)
	{
		length++;
		n = n / 10;
	}
	return (length);
}

void	rev_str(char	*str)
{
	int		i;
	int		j;
	char	tmp;
	int		len;

	i = 0;
	len = ft_strlen(str);
	j = len - 1;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	n1;

	n1 = n;
	i = 0;
	str = malloc(ft_len(n1) + 1);
	if (!str)
		return (NULL);
	if (n1 == 0)
		str[i] = '0';
	if (n1 < 0)
	{
		str[ft_len(n1) - 1] = '-';
		n1 = n1 * -1;
	}
	while (n1 > 0)
	{
		str[i++] = n1 % 10 + '0';
		n1 = n1 / 10;
	}
	str[ft_len(n)] = '\0';
	rev_str(str);
	return (str);
}
