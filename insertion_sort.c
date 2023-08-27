/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:01:09 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 06:57:58 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insertion_sort(t_data *data)
{
	int	temp;
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < data->stack_a_size)
	{
		temp = data->sorted[i];
		j = i - 1;
		while (j >= 0 && data->sorted[j] > temp)
		{
			data->sorted[j + 1] = data->sorted[j];
			j--;
		}
		data->sorted[j + 1] = temp;
		i++;
	}
}
