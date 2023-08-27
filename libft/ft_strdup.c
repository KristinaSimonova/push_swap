/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 03:53:39 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/08 03:53:40 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	dest = (char *)malloc(sizeof(*dest) * (ft_strlen(s1) + 1));
	if (!dest)
		return (NULL);
	while (s1[j])
	{
		dest[i++] = s1[j++];
	}
	dest[i] = '\0';
	return (dest);
}
