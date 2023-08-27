/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:11:35 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 10:05:04 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_stack_a(t_data *data)
{
	int	i;
	int	count;

	data->stack_a = (int *)malloc(sizeof(int) * data->stack_a_size);
	if (!data->stack_a)
		return ;
	i = 0;
	count = data->stack_a_size;
	while (count > 0)
	{
		data->stack_a[i] = data->indexes[i];
		--count;
		i++;
	}
}

static void	nbr_to_index(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->stack_a_size)
	{
		j = 0;
		while (j < data->stack_a_size)
		{
			if (data->indexes[i] == data->sorted[j])
			{
				data->indexes[i] = j;
				break ;
			}
			++j;
		}
		++i;
	}
}

static int	max_bits(t_data *data)
{
	int	max_num;
	int	max_bits;

	max_num = data->stack_a_size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
	{
		++max_bits;
	}
	return (max_bits);
}

static void	radix(t_data *data)
{
	int	size;
	int	i;
	int	j;
	int	num;

	size = data->stack_a_size;
	i = 0;
	while (i < max_bits(data))
	{
		j = 0;
		while (j++ < size)
		{
			num = data->stack_a[data->stack_top];
			if (((num >> i) & 1) == 1)
				rotate_a(data);
			else
				push_b(data);
		}
		while (data->stack_b_size != 0)
			push_a(data);
		i++;
	}
}

void	radix_sort(t_data *data)
{
	nbr_to_index(data);
	fill_stack_a(data);
	radix(data);
}
