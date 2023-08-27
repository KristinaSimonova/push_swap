/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:00:29 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 10:08:21 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_signs(char *str, int i)
{
	int	negative;
	int	positive;

	negative = 0;
	positive = 0;
	if (str[i] == '-' && negative == 0)
		negative = 1;
	else if (str[i] == '-' && negative == 1)
		return (1);
	else
		negative = 0;
	if (str[i] == '+' && positive == 0)
		positive = 1;
	else if (str[i] == '+' && positive == 1)
		return (1);
	else
		positive = 0;
	if (str[i] == '+' && str[i + 1] == '-')
		return (1);
	else if (str[i] == '-' && str[i + 1] == '+')
		return (1);
	return (0);
}

static int	check_digits(char *str, int i)
{
	if (!((str[i] >= 48 && str[i] <= 57) || str[i] == 32
			|| str[i] == '-' || str[i] == '+'))
		return (1);
	return (0);
}

int	parse_args(t_data *data, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_signs(str, i) == 0 || check_digits(str, i) == 0)
			i++;
		else
		{
			write(2, "Error/n", 6);
			free_parsed_data(data);
		}
	}
	return (0);
}

void	parse_duplicates(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < (data->stack_a_size - 1))
	{
		j = i + 1;
		while (j < data->stack_a_size)
		{
			if (data->indexes[i] == data->indexes[j])
			{
				write (2, "Error\n", 6);
				free_data(data);
			}
			j++;
		}
		i++;
	}
}
