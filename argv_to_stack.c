/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:46:50 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 04:23:53 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	argv_to_stack(int argc, char **argv, t_data *data)
{
	int	i;

	i = 1;
	data->joined_args = ft_strdup("");
	while (i < argc)
	{
		data->temp_str = data->joined_args;
		data->joined_args = ft_strjoin(data->temp_str, argv[i]);
		free (data->temp_str);
	//	data->str_temp = NULL;
		data->temp_str = data->joined_args;
		data->joined_args = ft_strjoin(data->temp_str, " ");
		free (data->temp_str);
	//	data->str_temp = NULL;
		i++;
	}
	parse_args(data, data->joined_args);
	data->str_values = ft_split(data->joined_args, ' ');
	free (data->joined_args);
	launch(data);
}