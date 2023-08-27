/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 03:53:15 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/08 05:16:47 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int			i;
	unsigned char			*dest;
	unsigned const char		*arr;

	i = 0;
	dest = (unsigned char *)dst;
	arr = (unsigned const char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dest > arr)
	{
		while (len-- > 0)
			dest[len] = arr[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = arr[i];
			i++;
		}
	}
	return (dst);
}
