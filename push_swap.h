/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:28:05 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 13:37:49 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdbool.h>
# include <stdio.h>
# include "./libft/libft.h"

typedef struct s_data
{
	int			size;
	int			stack_top;
	int			stack_bottom;
	int			temp;
	int			counter;
	int			*stack_a;
	int			*stack_b;
	int			*indexes;
	int			*sorted;
	int			*stack_temp;
	int			pa_flag;
	int			stack_a_size;
	int			stack_b_size;
	int			pb_flag;
	char		*temp_str;
	char		*joined_args;
	char		**str_values;
	long		res;
	int			sign;
	long int	i;
}			t_data;

void	empty_args(void);
void	argv_to_stack(int argc, char **argv, t_data *data);
void	free_data(t_data *data);
void	free_parsed_data(t_data *data);
void	free_atoi(t_data *data);
void	free_without_error(t_data *data);
int		parse_args(t_data *data, char *str);
void	parse_duplicates(t_data *data);
void	launch(t_data *data);
int		check_if_sorted(t_data *data, int *ptr);
int		edited_atoi(const char *str, t_data *data);
void	insertion_sort(t_data *data);
void	radix_sort(t_data *data);
void	push_a(t_data *data);
void	push_b(t_data *data);
void	rotate_a(t_data *data);
void	rotate_b(t_data *data);
void	rotate_ab(t_data *data);
void	rev_rotate_a(t_data *data);
void	rev_rotate_b(t_data *data);
void	less_five_sort(t_data *data);
int		minimum_nbr_index(t_data *data);
void	swap_a(t_data *data);
void	swap_b(t_data *data);
void	swap_ab(t_data *data);
int		case1(t_data *data);
int		case2(t_data *data);
int		case3(t_data *data);
int		case4(t_data *data);
int		case5(t_data *data);
void	free_without_b_data(t_data *data);

#endif