/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medindar <medindar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:09:29 by medindar           #+#    #+#             */
/*   Updated: 2023/09/27 17:30:45 by medindar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(char **av)
{
	t_stack	stack;
	int		size;
	int		i;

	i = -1;
	size = ft_ps_strlen(av);
	stack.a = malloc(sizeof(int) * size);
	if (!stack.a)
		return ;
	stack.size_a = size;
	stack.b = malloc(sizeof(int) * size);
	if (!stack.b)
	{
		free (stack.a);
		return ;
	}
	stack.size_b = 0;
	while (++i < size)
		stack.a[i] = ft_ps_atoi(av[i], stack.a);
	ft_check_repeat(stack.a, size);
	ft_sort(&stack, size);
	free (stack.a);
	free (stack.b);
}

int	main(int ac, char **av)
{
	char	**data;

	data = NULL;
	if (ac > 1)
	{
		av++;
		if (ac == 2)
		{
			data = ft_split(*av, ' ');
			if (data)
				ft_push_swap(data);
		}
		else
			ft_push_swap(av);
	}
	if (data)
		free_(data);
	return (0);
}
