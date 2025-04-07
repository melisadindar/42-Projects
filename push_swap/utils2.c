/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medindar <medindar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:11:56 by medindar           #+#    #+#             */
/*   Updated: 2023/09/29 12:15:22 by medindar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	ret = malloc(count * size);
	if (ret)
		ft_memset(ret, '\0', count * size);
	return (ret);
}

void	free_(char **data)
{
	int	i;

	i = 0;
	while (data[i])
		free(data[i++]);
	free(data);
}
