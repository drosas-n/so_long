/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosas-n <drosas-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:24:30 by drosas-n          #+#    #+#             */
/*   Updated: 2023/09/04 19:07:36 by drosas-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long long n)
{
	int	x;

	x = 0;
	x += ft_prtstring("0x");
	x += ft_hexadec(n, 'x');
	return (x);
}