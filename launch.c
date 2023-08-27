/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:26:47 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 10:08:48 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_stack_size(t_data *data)
{
	data->stack_a_size = 0;
	while (data->str_values[data->stack_a_size])
	{
		data->stack_a_size++;
	}
	if (data->stack_a_size == 1)
	{
		free_without_error(data);
		exit(0);
	}
	return (0);
}

static int	fill_indexes_array(t_data *data)
{
	int	j;
	int	count;

	data->indexes = (int *)malloc(sizeof(int) * data->stack_a_size);
	if (!data->indexes)
		return (0);
	j = 0;
	count = data->stack_a_size;
	while (count > 0)
	{
		data->indexes[j] = edited_atoi(data->str_values[j], data);
		--count;
		j++;
	}
	return (1);
}

static int	fill_stack_a(t_data *data)
{
	int	j;
	int	count;

	data->stack_a = (int *)malloc(sizeof(int) * data->stack_a_size);
	if (!data->stack_a)
		return (0);
	j = 0;
	count = data->stack_a_size;
	while (count > 0)
	{
		data->stack_a[j] = edited_atoi(data->str_values[j], data);
		--count;
		j++;
	}
	return (1);
}

static int	fill_sorted_array(t_data *data)
{
	int	j;
	int	count;

	data->sorted = (int *)malloc(sizeof(int) * data->stack_a_size);
	if (!data->sorted)
		return (0);
	j = 0;
	count = data->stack_a_size;
	while (count > 0)
	{
		data->sorted[j] = edited_atoi(data->str_values[j], data);
		--count;
		j++;
	}
	return (1);
}

void	launch(t_data *data)
{
	get_stack_size(data);
	fill_indexes_array(data);
	if (fill_sorted_array(data))
		insertion_sort(data);
	parse_duplicates(data);
	if (check_if_sorted(data, data->indexes) == 0)
	{
		free_data(data);
		exit(0);
	}
	if (data->stack_a_size > 5)
		radix_sort(data);
	else
	{
		fill_stack_a(data);
		less_five_sort(data);
	}
}
