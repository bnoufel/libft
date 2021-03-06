/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapion <tapion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:48:39 by tapion            #+#    #+#             */
/*   Updated: 2021/04/20 05:48:40 by tapion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MEM_H
# define __MEM_H
# include <stddef.h>
# include <stdint.h>

void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmem(const void *big, size_t big_len, const void *little,
				size_t	little_len);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memrchr(const void *s, int c, size_t n);
void		*ft_memrev(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t n);
void		*ft_memjoinfreefirst(void *s1, size_t l1, void *s2, size_t l2);

#endif
