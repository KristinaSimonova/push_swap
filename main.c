/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:27:31 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 08:27:45 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_data	*data;

	if (argc < 2)
		return (0);
	i = 0;
	while (i < argc)
	{
		if (argv[i][0] == 0)
			empty_args();
		i++;
	}
	data = ft_calloc(sizeof(t_data), 1);
	if (!data)
		return (1);
	argv_to_stack(argc, argv, data);
	free_data(data);
}