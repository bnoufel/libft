/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:51 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

/*
**	@param str
**	The ft_str_is_alpha() function tests for any character for ft_isalpha is
**	true.
************************* RETURN VALUES **********************************
**	The ft_str_is_alpha() function returns zero if one of character tests false
**		and returns non-zero if one of character tests true.
*/

int		ft_str_is_ascii(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ft_isascii(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
