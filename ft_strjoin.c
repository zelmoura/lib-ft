/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <zelmoura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:24:32 by zelmoura          #+#    #+#             */
/*   Updated: 2023/01/21 22:48:52 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str_joined;
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str_joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str_joined == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		str_joined[i] = s1[i];
		i++;
	}
	while (i < (ft_strlen(s1) + ft_strlen(s2)) && j < ft_strlen(s2))
	{
		str_joined[i++] = s2[j++];
	}
	str_joined[i] = '\0';
	return ((char *)str_joined);
}
