/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:16:34 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include <stdlib.h>

/*
**  ft_ultoa function allocates sufficient memory and return a string finished
**  by a '\0' representing the unsigned long n passed in parameter.
**  The negative number must be managed.
**  if the allocated failed ft_ultoa return NULL
**  @param n
**  @return string
*/

char	*ft_ultoa(size_t n)
{
	return (ft_ulltoa_base(n, 10));
}
