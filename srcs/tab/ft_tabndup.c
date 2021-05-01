/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:03:13 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab.h"
#include "str.h"
#include "mem.h"
#include <stdlib.h>

/*
**	@param const char **s
**	The ft_tabndub() function allocates size n memory for a copy of the
**	tab s1, does the copy, and returns a pointer to it.
**	The pointer may subsequently be used as an argument to the function free.
*/

char	**ft_tabndup(char **s1, size_t n)
{
	size_t	i;
	char	**str;

	i = 0;
	str = ft_tabnew(n);
	if (!str)
		return (NULL);
	while (i < n)
	{
		str[i] = ft_strdup(s1[i]);
		if (!str[i])
			return (NULL);
		i++;
	}
	str[i] = 0;
	return (str);
}
