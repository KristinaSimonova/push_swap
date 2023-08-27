/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:51:13 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 13:35:24 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_data(t_data *data)
{
	int	j;

	j = 0;
	while (data->str_values[j])
	{
		free(data->str_values[j]);
		j++;
	}
	free(data->str_values);
	free(data->stack_a);
	free(data->stack_b);
	free(data->sorted);
	free(data->indexes);
	free(data);
	exit(0);
}

void	free_without_b_data(t_data *data)
{
	int	j;

	j = 0;
	while (data->str_values[j])
	{
		free(data->str_values[j]);
		j++;
	}
	free(data->str_values);
	free(data->stack_a);
	free(data->sorted);
	free(data->indexes);
	free(data);
	exit(0);
}

void	free_parsed_data(t_data *data)
{
	free(data->indexes);
	free(data->sorted);
	free(data);
	exit (0);
}

void	free_atoi(t_data *data)
{
	int	j;

	j = 0;
	write (2, "Error\n", 6);
	while (data->str_values[j])
	{
		free(data->str_values[j]);
		j++;
	}
	free (data->str_values);
	free(data->stack_a);
	free(data->sorted);
	free(data->indexes);
	free(data);
	data = NULL;
	exit (0);
}

void	free_without_error(t_data *data)
{
	int	j;

	j = 0;
	while (data->str_values[j])
	{
		free(data->str_values[j]);
		j++;
	}
	free (data->str_values);
	free(data->stack_a);
	free(data->sorted);
	free(data->indexes);
	free(data);
	data = NULL;
	exit (0);
}
