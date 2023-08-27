/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:50:28 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 05:52:46 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_data *data)
{
	data->stack_top = 0;
	data->temp = data->stack_a[data->stack_top + 1];
	data->stack_a[data->stack_top + 1] = data->stack_a[data->stack_top];
	data->stack_a[data->stack_top] = data->temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_data *data)
{
	data->stack_top = 0;
	data->temp = data->stack_b[data->stack_top + 1];
	data->stack_b[data->stack_top + 1] = data->stack_b[data->stack_top];
	data->stack_b[data->stack_top] = data->temp;
	write(1, "sb\n", 3);
}

void	swap_ab(t_data *data)
{
	data->stack_top = 0;
	data->temp = data->stack_a[data->stack_top + 1];
	data->stack_a[data->stack_top + 1] = data->stack_a[data->stack_top];
	data->stack_a[data->stack_top] = data->temp;
	data->temp = data->stack_b[data->stack_top + 1];
	data->stack_b[data->stack_top + 1] = data->stack_b[data->stack_top];
	data->stack_b[data->stack_top] = data->temp;
	write(1, "ss\n", 3);
}
