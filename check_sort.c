/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:00:32 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 10:00:44 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(t_data *data, int *ptr)
{
	int	i;

	i = 0;
	while (i < data->stack_a_size)
	{
		if (ptr[i] != data->sorted[i])
			return (1);
		i++;
	}
	return (0);
}
