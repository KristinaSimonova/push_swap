/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 03:53:43 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/08 03:53:44 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	if (!s)
		return ;
	i = ft_strlen(s);
	while (j < i)
	{
		(*f)(j, s);
		j++;
		s++;
	}
}
