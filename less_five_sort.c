/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_five_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:48:09 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 10:02:23 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_data *data)
{
	data->stack_bottom = data->stack_a_size - 1;
	data->stack_top = 0;
	if (case1(data) == true)
		swap_a(data);
	else if (case2(data) == true)
	{
		swap_a(data);
		rev_rotate_a(data);
	}
	else if (case3(data) == true)
		rotate_a(data);
	else if (case4(data) == true)
	{
		swap_a(data);
		rotate_a(data);
	}
	else if (case5(data) == true)
		rev_rotate_a(data);
}

static void	sort_four(t_data *data)
{
	int	min_pos;

	min_pos = minimum_nbr_index(data);
	if (check_if_sorted(data, data->stack_a) == 0)
		return ;
	if (min_pos == 1)
		rotate_a(data);
	else if (min_pos == 2)
	{
		rotate_a(data);
		rotate_a(data);
	}
	else if (min_pos == 3)
	{
		rev_rotate_a(data);
	}
	if (check_if_sorted(data, data->stack_a) == 0)
		return ;
	push_b(data);
	sort_three(data);
	push_a(data);
}

int	minimum_nbr_index(t_data *data)
{
	int	i;
	int	position;

	i = 1;
	position = 0;
	while (i < (data->stack_a_size))
	{
		if (data->stack_a[i] < data->stack_a[position])
			position = i;
		i++;
	}
	return (position);
}

static void	sort_five(t_data *data)
{
	int	min_pos;

	min_pos = minimum_nbr_index(data);
	if (check_if_sorted(data, data->stack_a) == 0)
		return ;
	if (min_pos == 1)
		rotate_a(data);
	else if (min_pos == 2)
	{
		rotate_a(data);
		rotate_a(data);
	}
	else if (min_pos == 3)
	{
		rev_rotate_a(data);
		rev_rotate_a(data);
	}
	else if (min_pos == 4)
		rev_rotate_a(data);
	if (check_if_sorted(data, data->stack_a) == 0)
		return ;
	push_b(data);
	sort_four(data);
	push_a(data);
}

void	less_five_sort(t_data *data)
{
	if (data->stack_a_size == 2)
		swap_a(data);
	if (data->stack_a_size == 3)
		sort_three(data);
	if (data->stack_a_size == 4)
		sort_four(data);
	if (data->stack_a_size == 5)
		sort_five(data);
}
