/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:28:51 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 10:07:27 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	add_to_stack_a(t_data *data)
{
	int	i;

	data->stack_temp = (int *)malloc(sizeof(int) * (data->stack_a_size));
	data->stack_top = 0;
	while (data->stack_top < (data->stack_a_size))
	{
		data->stack_temp[data->stack_top] = data->stack_a[data->stack_top];
		data->stack_top++;
	}
	free(data->stack_a);
	data->stack_a = (int *)malloc(sizeof(int) * (data->stack_a_size + 1));
	if (!data->stack_a)
		return ;
	data->stack_top = 0;
	i = 0;
	data->stack_a[data->stack_top++] = data->stack_b[0];
	while (data->stack_top < (data->stack_a_size + 1))
	{
		data->stack_a[data->stack_top] = data->stack_temp[i];
		data->stack_top++;
		i++;
	}
	free(data->stack_temp);
}

static void	from_b_to_a(t_data *data)
{
	int	j;

	data->stack_temp = (int *)malloc(sizeof(int) * data->stack_b_size);
	data->stack_top = 0;
	while (data->stack_top < (data->stack_b_size))
	{
		data->stack_temp[data->stack_top] = data->stack_b[data->stack_top];
		data->stack_top++;
	}
	free(data->stack_b);
	data->stack_b = (int *)malloc(sizeof(int) * (data->stack_b_size - 1));
	if (!data->stack_b)
		return ;
	data->stack_b_size--;
	data->stack_top--;
	j = 0;
	while (j < data->stack_b_size && data->stack_top > 0)
	{
		data->stack_b[data->stack_top - 1] = data->stack_temp[data->stack_top];
		data->stack_top--;
		j++;
	}
	free(data->stack_temp);
}

void	push_a(t_data *data)
{
	data->stack_top = 0;
	if (data->stack_a_size == 0)
	{
		data->stack_a = (int *)malloc(sizeof(int) * data->pa_flag);
		if (!data->stack_a)
			return ;
		data->stack_a[data->stack_top] = data->stack_b[data->stack_top];
		from_b_to_a(data);
	}
	else
	{
		add_to_stack_a(data);
		from_b_to_a(data);
	}
	data->stack_a_size++;
	write(1, "pa\n", 3);
}
