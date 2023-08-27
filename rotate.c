/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:39:09 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 05:39:47 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_data *data)
{
	int	i;
	int	j;
	int	temp_count;

	i = 1;
	j = 0;
	temp_count = data->stack_a_size - 1;
	data->temp = 0;
	data->temp = data->stack_a[0];
	while ((temp_count) > 0)
	{
		data->stack_a[j++] = data->stack_a[i++];
		temp_count--;
	}
	data->stack_a[j] = data->temp;
	write(1, "ra\n", 3);
}

void	rotate_b(t_data *data)
{
	int	i;
	int	j;
	int	temp_count;

	i = 1;
	j = 0;
	temp_count = data->stack_b_size - 1;
	data->temp = 0;
	data->temp = data->stack_b[0];
	while ((temp_count) > 0)
	{
		data->stack_b[j++] = data->stack_b[i++];
		temp_count--;
	}
	data->stack_b[j] = data->temp;
	write(1, "rb\n", 3);
}

void	rotate_ab(t_data *data)
{
	rotate_a(data);
	rotate_b(data);
	write(1, "rr\n", 3);
}

void	rev_rotate_a(t_data *data)
{
	int	temp_count;

	temp_count = data->stack_a_size - 1;
	data->temp = 0;
	data->temp = data->stack_a[temp_count];
	while ((temp_count) > 0)
	{
		data->stack_a[temp_count] = data->stack_a[temp_count - 1];
		temp_count--;
	}
	data->stack_a[0] = data->temp;
	write(1, "rra\n", 4);
}

void	rev_rotate_b(t_data *data)
{
	int	temp_count;

	temp_count = data->stack_b_size - 1;
	data->temp = 0;
	data->temp = data->stack_b[temp_count];
	while ((temp_count) > 0)
	{
		data->stack_b[temp_count] = data->stack_b[temp_count - 1];
		temp_count--;
	}
	data->stack_b[0] = data->temp;
	write(1, "rrb\n", 4);
}
