/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 03:53:12 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/08 03:53:13 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int			i;
	unsigned char			*dest;
	unsigned const char		*arr;

	i = 0;
	dest = (unsigned char *)dst;
	arr = (unsigned const char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = arr[i];
		i++;
	}
	return (dst);
}
