/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupfree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapion <tapion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:46:18 by tapion            #+#    #+#             */
/*   Updated: 2021/04/20 05:46:19 by tapion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strdupfree(char *str, char **ptr_to_free)
{
	char	*new;

	new = ft_strdup(str);
	if (!new)
	{
		ft_strdel(ptr_to_free);
		return (NULL);
	}
	ft_strdel(&ptr_to_free);
	return (new);
}
