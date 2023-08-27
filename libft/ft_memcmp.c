/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 03:53:09 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/08 03:53:10 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	*arr;

	str = (unsigned char *)s1;
	arr = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (str[i] != arr[i])
			return (str[i] - arr[i]);
		i++;
	}
	return (*str - *arr);
}
