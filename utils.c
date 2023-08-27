/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:50:55 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 10:07:05 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	edited_atoi(const char *str, t_data *data)
{
	data->res = 0;
	data->sign = 1;
	data->i = 0;
	while (str[data->i] == ' ' || str[data->i] == '\t')
		data->i++;
	if (str[data->i] == '-' || str[data->i] == '+')
	{
		if (str[data->i] == '-')
			data->sign = -1;
		data->i++;
	}
	if (!(str[data->i] >= '0' && str[data->i] <= '9'))
		free_atoi(data);
	while (str[data->i] >= '0' && str[data->i] <= '9')
	{
		data->res = data->res * 10 + str[data->i] - '0';
		data->i++;
	}
	if (!((str[data->i] >= '0' && str[data->i] <= '9')
			|| (str[data->i] == ' ' || str[data->i] == '\0')))
		free_atoi(data);
	if ((data->res * data->sign) > 2147483647
		|| (data->res * data->sign) < -2147483648)
		free_atoi(data);
	return ((int)(data->res * data->sign));
}
