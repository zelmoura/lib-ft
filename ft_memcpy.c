/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <zelmoura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:31:21 by zelmoura          #+#    #+#             */
/*   Updated: 2023/01/10 15:51:38 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy( void *destination, const void *source, size_t size )
{
	size_t	i;

	i = 0;
	if (destination == source)
		return (destination);
	while (i < size)
	{
		(*(unsigned char *)(destination + i)) = \
		(*(unsigned char *)(source + i));
		i++;
	}
	return (destination);
}
