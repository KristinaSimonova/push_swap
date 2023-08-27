/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 03:54:07 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/08 03:54:08 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needlesize;

	i = 0;
	j = 0;
	needlesize = ft_strlen(needle);
	if (!*needle || needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j]
			&& i + j < len)
			j++;
		if (needlesize == j)
			return ((char *)&haystack[i]);
		i++;
		j = 0;
	}
	return (0);
}
