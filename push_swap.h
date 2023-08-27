/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:28:05 by ksimonov          #+#    #+#             */
/*   Updated: 2023/08/27 08:32:50 by ksimonov         ###   ########.fr       */
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
	int			*indexes; //input
	int			*sorted; //copy
	int			*stack_temp;
	int			pa_flag;
	int			stack_a_size; //a_count
	int			stack_b_size; //b_count
	int			pb_flag;
	char		*temp_str;
	char		*joined_args; //values
	char		**str_values;
    
    /*  for ft_atoi   */
	long		res;
	int			sign;
	long int	i;
}			t_data;

/*          error.c         */
void	empty_args(void);

/*          argv_to_stack.c     */
void	argv_to_stack(int argc, char **argv, t_data *data);

/*      free_data.c         */

void	free_data(t_data *data);
void	free_parsed_data(t_data *data);
void	free_atoi(t_data *data);
void	free_without_error(t_data *data);


/*          parsing.c           */
int	parse_args(t_data *data, char *str);
void	parse_duplicates(t_data *data);

/*          launch.c            */
void	launch(t_data *data);
int     check_if_sorted(t_data *data, int *ptr);
int	fill_integer_array(t_data *data, int *ptr);

/*          utils.c         */
int	edited_atoi(const char *str, t_data *data);

/*          insertion_sort.c            */
void	insertion_sort(t_data *data);

/*          radix_sort.c        */
void	radix_sort(t_data *data);

/*      Rules       */
void	push_a(t_data *data);
void	push_b(t_data *data);

/*              rotate.c            */
void	rotate_a(t_data *data);
void	rotate_b(t_data *data);
void	rotate_ab(t_data *data);
void	rev_rotate_a(t_data *data);
void	rev_rotate_b(t_data *data);


/*              less_five_sort.c            */
void	less_five_sort(t_data *data);
int	    minimum_nbr_index(t_data *data);


/*            swap.c            */
void	swap_a(t_data *data);
void	swap_b(t_data *data);
void	swap_ab(t_data *data);
void	sort_it(t_data *data);

/*      sort_three_cases.c      */
int	case1(t_data *data);
int	case2(t_data *data);
int	case3(t_data *data);
int	case4(t_data *data);
int	case5(t_data *data);

#endif