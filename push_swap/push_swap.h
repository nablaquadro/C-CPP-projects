/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:35:10 by aceremig          #+#    #+#             */
/*   Updated: 2022/05/17 16:35:39 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./lib/libft.h"

void	write_lst(t_list **stack_a, int argc, char **argv, int i);
int		*copy_cont(t_list *stack_a, int size);
int		*define_lis(int *dst, int size, int *max);
void	ft_move_to_b(t_list **stack_a, t_list **stack_b, int *arr, int max);
int		ft_best_nbr_a(t_list *stack_a, int size, int *arr, int max);
void	ft_ra(t_list **stack_a);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_move_to_a(t_list **stack_a, t_list **stack_b);
int		ft_best_nbr_b(t_list **stack_b, int size_b,
			t_list **stack_a, int size_a);
int		ft_the_needed_b(int max, int size);
int		ft_the_needed_a(t_list *stack_a, int cont, int size);
int		ft_max_or_min(t_list *stack_a, int cont, int size);
int		return_max_or_min(int cont, int *max_n_min, int size);
int		*ft_intcpy(int	*arr, int size);
int		ft_best_comb(int *arr_a, int *arr_b, int size);
int		ft_max_nbr(int a, int b);
int		ft_best_comb_helper(int *arr_a, int *arr_b, int *tmp, int size);
int		ft_move_a(int a, int b, t_list **stack_a, t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rb(t_list **stack_b);
void	ft_pa(t_list **stack_b, t_list **stack_a);
void	ft_search_min(t_list **stack_a, int size);
int		*define_lis(int *dst, int size, int *max);
void	ft_lst_delete(t_list **stack);
void	ft_sa(t_list **stack_a);
void	ft_basic_algorithm(t_list **stack_a, t_list **stack_b);
#endif
