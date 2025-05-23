/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medindar <medindar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:20:24 by medindar           #+#    #+#             */
/*   Updated: 2023/09/19 14:31:46 by medindar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack	*stack, int print)
{
	int	tmp;

	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (!print)
		write(1, "ss\n", 3);
}

void	rr(t_stack	*stack, int print)
{
	int	tmp;
	int	index;

	index = 0;
	tmp = stack->a[index];
	while (++index < stack->size_a)
		stack->a[index - 1] = stack->a[index];
	stack->a[index - 1] = tmp;
	index = 0;
	tmp = stack->b[index];
	while (++index < stack->size_b)
		stack->b[index - 1] = stack->b[index];
	stack->b[index - 1] = tmp;
	if (!print)
		write(1, "rr\n", 3);
}

void	rrr(t_stack *stack, int print)
{
	register int	tmp;
	register int	index;

	index = stack->size_a - 1;
	tmp = stack->a[index];
	while (index)
	{
		stack->a[index] = stack->a[index - 1];
		index--;
	}
	stack->a[index] = tmp;
	index = stack->size_b - 1;
	tmp = stack->b[index];
	while (index--)
		stack->b[index] = stack->b[index - 1];
	stack->b[index] = tmp;
	if (!print)
		write(1, "rrr\n", 4);
}
