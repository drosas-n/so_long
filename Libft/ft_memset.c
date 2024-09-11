/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosas-n <drosas-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:30:04 by drosas-n          #+#    #+#             */
/*   Updated: 2023/07/10 18:06:39 by drosas-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	x;
	char	*b1;

	b1 = (char *)b;
	x = 0;
	while (x < len)
	{
		b1[x] = c;
		x++;
	}
	return ((void *)b1);
}