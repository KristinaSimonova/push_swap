/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_cases.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 06:08:42 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 10:06:51 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case1(t_data *data)
{
	if (data->stack_a[data->stack_bottom] > data->stack_a[data->stack_top]
		&& data->stack_a[data->stack_top] > data->stack_a[data->stack_top + 1]
		&& data->stack_a[data->stack_bottom] \
		> data->stack_a[data->stack_top + 1])
		return (1);
	else
		return (0);
}

int	case2(t_data *data)
{
	if (data->stack_a[data->stack_bottom] < data->stack_a[data->stack_top]
		&& data->stack_a[data->stack_top] > data->stack_a[data->stack_top + 1]
		&& data->stack_a[data->stack_bottom] \
		< data->stack_a[data->stack_top + 1])
		return (1);
	else
		return (0);
}

int	case3(t_data *data)
{
	if (data->stack_a[data->stack_bottom] < data->stack_a[data->stack_top]
		&& data->stack_a[data->stack_top] > data->stack_a[data->stack_top + 1]
		&& data->stack_a[data->stack_bottom] \
		> data->stack_a[data->stack_top + 1])
		return (1);
	else
		return (0);
}

int	case4(t_data *data)
{
	if (data->stack_a[data->stack_bottom] > data->stack_a[data->stack_top]
		&& data->stack_a[data->stack_top] < data->stack_a[data->stack_top + 1]
		&& data->stack_a[data->stack_bottom] \
		< data->stack_a[data->stack_top + 1])
		return (1);
	else
		return (0);
}

int	case5(t_data *data)
{
	if (data->stack_a[data->stack_bottom] < data->stack_a[data->stack_top]
		&& data->stack_a[data->stack_top] < data->stack_a[data->stack_top + 1]
		&& data->stack_a[data->stack_bottom] \
		< data->stack_a[data->stack_top + 1])
		return (1);
	else
		return (0);
}
