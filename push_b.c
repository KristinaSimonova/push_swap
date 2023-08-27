/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:34:26 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 13:34:56 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	add_to_stack_b(t_data *data)
{
	int	count;

	count = 0;
	data->stack_temp = (int *)malloc(sizeof(int) * (data->stack_b_size));
	if(!data->stack_temp)
	{
		free_data(data);
		exit (0);
	}
	
	while (count < (data->stack_b_size))
	{
		data->stack_temp[count] = data->stack_b[count];
		count++;
	}
	free(data->stack_b);
	if (data->stack_b_size > 1)
		data->stack_b = (int *)malloc(sizeof(int) * (data->stack_b_size + 1));
	if (!data->stack_b)
		return ;
	data->stack_top = 0;
	count = 0;
	data->stack_b[data->stack_top++] = data->stack_a[count];
	while (data->stack_top < (data->stack_b_size + 1))
	{
		data->stack_b[data->stack_top] = data->stack_temp[count];
		data->stack_top++;
		count++;
	}
	free(data->stack_temp);
}

static void	from_a_to_b(t_data *data)
{
	int	j;

	data->stack_temp = (int *)malloc(sizeof(int) * data->stack_a_size);
	data->stack_top = 0;
	while (data->stack_top < (data->stack_a_size))
	{
		data->stack_temp[data->stack_top] = data->stack_a[data->stack_top];
		data->stack_top++;
	}
	free(data->stack_a);
	data->stack_a = (int *)malloc(sizeof(int) * (data->stack_a_size - 1));
	if (!data->stack_a)
		return ;
	data->stack_a_size -= 1;
	data->stack_top -= 1;
	j = 0;
	while (j < data->stack_a_size && data->stack_top > 0)
	{
		data->stack_a[data->stack_top - 1] = data->stack_temp[data->stack_top];
		data->stack_top--;
		j++;
	}
	free(data->stack_temp);
}

void	push_b(t_data *data)
{
	if (data->stack_b_size == 0)
	{
		data->stack_b = (int *)malloc(sizeof(int));
		if (!data->stack_b)
			return ;
		data->stack_b[0] = data->stack_a[0];
		from_a_to_b(data);
	}
	else
	{
		add_to_stack_b(data);
		from_a_to_b(data);
	}
	data->stack_b_size++;
	write(1, "pb\n", 3);
}
