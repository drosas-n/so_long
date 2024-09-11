/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosas-n <drosas-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:29:47 by drosas-n          #+#    #+#             */
/*   Updated: 2023/05/11 20:06:40 by drosas-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	x;
	int	z;
	int	signo;

	x = 0;
	z = 0;
	signo = 1;
	while (str[x] == 32 || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			signo = -1;
		x++;
	}
	while ((str[x] >= 48 && str[x] <= 57))
	{
		z *= 10;
		z += str[x] - 48;
		x++;
	}
	return (z * signo);
}