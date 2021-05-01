/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atos_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:15:24 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
**	The ft_atos() function converts the initial portion
**		of the string pointed to by str with a base to short representation.
*/

int16_t	ft_atos_base(const char *str, int8_t base)
{
	return (ft_atoll_base(str, base));
}
