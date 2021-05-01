/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llonglen_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:14:58 by bnoufel           #+#    #+#             */
/*   Updated: 2021/05/01 17:29:21 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
**	@param int64_t n
**	@param int base
**	Calculate size of value and return it
*/

int64_t	ft_llonglen_base(int64_t n, int base)
{
	int64_t	len;

	len = 0;
	if (base < 2 || base > 16)
		return (0);
	if (!n)
		return (1);
	if (n < 0 && base == 10)
		len++;
	n /= base;
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}
