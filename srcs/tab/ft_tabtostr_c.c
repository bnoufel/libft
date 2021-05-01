/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtostr_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:03:24 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "tab.h"

/*
**	Transform an array into a string with a char in paramater in separation.
************************* RETURN VALUES **********************************
**	The ft_tabtostr_c function returns the new string set to zero or NULL
**	if allocate fail.
*/

static char	*return_str(char **tab, char *str, char s2[2])
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_tablen(tab);
	while (i < len)
	{
		str = ft_strjoinfree(str, (char *)tab[i], 1);
		if (!str)
			return (NULL);
		str = ft_strjoinfree(str, s2, 1);
		if (!str)
			return (NULL);
		i++;
	}
	return (str);
}

char	*ft_tabtostr_c(char **tab, const char c)
{
	char	s2[2];
	char	*str;

	s2[0] = c;
	s2[1] = '\0';
	str = ft_strnew(1);
	if (!str)
		return (NULL);
	return (return_str(tab, str, s2));
}
